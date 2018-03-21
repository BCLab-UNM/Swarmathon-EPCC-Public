#include "SearchController.h"
#include <angles/angles.h>

//epcc added
#include <ros/ros.h>
#include "std_msgs/String.h"


float epccOrtogonalAngle=0;
float BoundaryLimitEpcc=0;
float prelimChanceTreshold=0;
float epccSimulatedTime=1; // variable HAS TO KNOW for how many minutes we have been competing.
float CorridorWidthEpcc=0;
float BarbWireLengthEpcc=0;
float ImNearCorridor=0;
float PortalWidth=0;
float AreaCoefficient=0;
float LongRangeCoefficient=0;
int BigArena=0;


SearchController::SearchController() {
  rng = new random_numbers::RandomNumberGenerator();
  // epcc // we need true center locations to prevent odometer/gps dislocation
  currentLocation.x = -1.31;
  currentLocation.y = 0;
  currentLocation.theta = 0;

  centerLocation.x = 0;
  centerLocation.y = 0;
  centerLocation.theta = 0;
  result.PIDMode = FAST_PID;

  result.fingerAngle = M_PI/2;
  result.wristAngle = M_PI/4;
}

void SearchController::Reset() {
  result.reset = false;
}

/**
 * This code implements a basic random walk search.
 */
Result SearchController::DoWork() {

  if (!result.wpts.waypoints.empty()) {
    // original//    if (hypot(result.wpts.waypoints[0].x-currentLocation.x, result.wpts.waypoints[0].y-currentLocation.y) < 0.15) {  //original
    //epcc changed hypot from 0.15 to 0.95 and later to 1.5 ... this change worked very well!!! we may increase it to 2m because it seems that
    if (hypot(result.wpts.waypoints[0].x-currentLocation.x, result.wpts.waypoints[0].y-currentLocation.y) < 1.5) {
      attemptCount = 0;
    }
  }

  if (attemptCount > 0 && attemptCount < 5) {
    attemptCount++;
    if (succesfullPickup) {
      succesfullPickup = false;
      attemptCount = 1;
    }
    return result;
  }
  else if (attemptCount >= 5 || attemptCount == 0) 
  {
    attemptCount = 1;


    result.type = waypoint;
    Point  searchLocation;

    //select new position 50 cm from current location
    if (first_waypoint)
    {
      first_waypoint = false;
      
      // epcc teporary cancellation TO TEST pick up at corners // 
      //*   
      searchLocation.theta = currentLocation.theta + M_PI + 0.25*M_PI;
      searchLocation.x = currentLocation.x + (1.4*5* cos(searchLocation.theta));  // epcc from 7.5 to 4.5 to prevent bounce on v0.3
      searchLocation.y = currentLocation.y + (1.4*5* sin(searchLocation.theta));  // epcc from 7.5 to 4.5 to prevent bounce on v0.3
      //*/ 
      BigArena=0;
    }
    else
    {
    

    if (BigArena>=1){
      BoundaryLimitEpcc=9.0;
    }
    else{
      prelimChanceTreshold = rng->uniformReal(0, 1);
      if (prelimChanceTreshold<0.01){
          // epcc in case we are on final, and not prelim. 
          //If no rovernames are communicated, treshold could be a function of time and increase to 99% "IF" time>30minutes   
          BoundaryLimitEpcc=9.0;
      }
      else{
        BoundaryLimitEpcc=5.5;
      }
    }

    //EPCC// v.0.8 Sectorized behavior to divide terrain and prevent oversearching, and most importantly: TO PREVENT ROVER TRAFFIC
    PortalWidth=0.15;
    BarbWireLengthEpcc= BoundaryLimitEpcc-PortalWidth;
    CorridorWidthEpcc= 0.9;
    ImNearCorridor= CorridorWidthEpcc+0.15;
    AreaCoefficient=1.1*BoundaryLimitEpcc;
    LongRangeCoefficient=0.7;

    
    if ( (0 <= currentLocation.x)  &&  (0 <= currentLocation.y) ){ // Epcc // we are in the first quadrant
      if ( (currentLocation.x < (1.0*ImNearCorridor)) && (currentLocation.y>(1.0*BarbWireLengthEpcc)) ) {  //EPCC// |<| Top Portal
        searchLocation.x= -2.0*ImNearCorridor;                            
        searchLocation.y=BoundaryLimitEpcc;
      } 
      else { //EPCC// Not apt to move counterclocwise, return to your 1st quadrant
        searchLocation.x = rng->uniformReal(CorridorWidthEpcc,BoundaryLimitEpcc);        
        if ((LongRangeCoefficient*BoundaryLimitEpcc)<=searchLocation.x) { // this assures  migration accross quadrants with minimized traffic
          searchLocation.x= BoundaryLimitEpcc;//
        }
        else{// v.1.0 With long walks and minimum turns to cover more area in less time and increase chance of finding a distant cluster
          searchLocation.x = CorridorWidthEpcc + AreaCoefficient*(abs(searchLocation.x) -CorridorWidthEpcc)/(BoundaryLimitEpcc); 
        }

        searchLocation.y = rng->uniformReal(CorridorWidthEpcc,BoundaryLimitEpcc);        
        if ((LongRangeCoefficient*BoundaryLimitEpcc)<=searchLocation.y) {
          searchLocation.y= BoundaryLimitEpcc; //
        }
        else{
          searchLocation.y = CorridorWidthEpcc + AreaCoefficient*(abs(searchLocation.y) -CorridorWidthEpcc)/(BoundaryLimitEpcc); 
        }
      }
    }
    else if ( (currentLocation.x <=0)  &&  (0<=currentLocation.y) )  {//EPCC// we are in the second quadrant
     // if ( (currentLocation.x < (-BarbWireLengthEpcc) ) && (currentLocation.y < ImNearCorridor) ) { 
      if ( (currentLocation.x <=(-BoundaryLimitEpcc+1.0*PortalWidth) ) && ( currentLocation.y<=(-1.0*ImNearCorridor) )  ) {  
        searchLocation.x= -BoundaryLimitEpcc;  //EPCC// |v| Left Portal  ** 0.5 = This is the only quadrant without assigned rover in prelim, so escape from it is discouraged 
        searchLocation.y= -(2*ImNearCorridor); // This assures migration accross quadrants with minimized traffic
      } 
      else { //EPCC// Not apt to move clockwise, return to your 2nd quadrant 
        // v.1.0 With long walks and minimum turns to cover more area in less time and increase chance of finding a distant cluster
        searchLocation.x = rng->uniformReal(-BoundaryLimitEpcc,-CorridorWidthEpcc);        
        if (searchLocation.x<=(-LongRangeCoefficient*BoundaryLimitEpcc)) {
          searchLocation.x= -BoundaryLimitEpcc; // 
        }
        else{ // v.1.0 With long walks and minimum turns to cover more area in less time and increase chance of finding a distant cluster
          searchLocation.x = -(CorridorWidthEpcc + AreaCoefficient*(abs(searchLocation.x) -CorridorWidthEpcc)/(BoundaryLimitEpcc)  );

        }

        searchLocation.y = rng->uniformReal(CorridorWidthEpcc,BoundaryLimitEpcc);        
        if ((LongRangeCoefficient*BoundaryLimitEpcc)<=searchLocation.y) {
          searchLocation.y= BoundaryLimitEpcc; //
        }
        else{
          searchLocation.y = CorridorWidthEpcc + AreaCoefficient*(abs(searchLocation.y) -CorridorWidthEpcc)/(BoundaryLimitEpcc)  ;
        }
      }
    }

    else if( (currentLocation.y <= 0) && (currentLocation.x<=0) ){//EPCC// we are in the third quadrant
      if ( ( currentLocation.y<(-1.0*BarbWireLengthEpcc) ) && ( (-ImNearCorridor*1.0)< currentLocation.x )  ) { //EPCC// |>| Left Portal (the seccond quadrant will need more help)
        searchLocation.x= 2*ImNearCorridor;                                  
        searchLocation.y=-BoundaryLimitEpcc;
      }
      else{ //EPCC// Not apt to move clockwise, return to your 3nd quadrant 
        // v.1.0 With long walks and minimum turns to cover more area in less time and increase chance of finding a distant cluster
        searchLocation.x = rng->uniformReal(-BoundaryLimitEpcc,-CorridorWidthEpcc);        
        if (searchLocation.x<=(-LongRangeCoefficient*BoundaryLimitEpcc)) {
          searchLocation.x= -BoundaryLimitEpcc; // 
        }
        else{ // v.1.0 With long walks and minimum turns to cover more area in less time and increase chance of finding a distant cluster
          searchLocation.x = -(CorridorWidthEpcc + AreaCoefficient*(abs(searchLocation.x) -CorridorWidthEpcc)/(BoundaryLimitEpcc) );
        }

        searchLocation.y = rng->uniformReal(-BoundaryLimitEpcc,-CorridorWidthEpcc);
        if (searchLocation.y<=(-LongRangeCoefficient*BoundaryLimitEpcc)) {
          searchLocation.y= -BoundaryLimitEpcc; //
        }
        else{
          searchLocation.y = -(CorridorWidthEpcc + AreaCoefficient*(abs(searchLocation.y) -CorridorWidthEpcc)/(BoundaryLimitEpcc) );
        }        
      }
    }
    else if ( (0<=currentLocation.x)  &&  (currentLocation.y<=0) )  {//EPCC// we are in the fourth quadrant
      if (( BarbWireLengthEpcc < currentLocation.x) && ( (-ImNearCorridor)<currentLocation.y) ) { //EPCC// |^| Right Portal
        searchLocation.y= 2*ImNearCorridor;                                  
        searchLocation.x=BoundaryLimitEpcc;
      }
      else{ //EPCC// Not apt to move clockwise, return to your 3nd quadrant 
        // v.1.0 With long walks and minimum turns to cover more area in less time and increase chance of finding a distant cluster
        searchLocation.x = rng->uniformReal(CorridorWidthEpcc,BoundaryLimitEpcc);        
        if (searchLocation.x>=(LongRangeCoefficient*BoundaryLimitEpcc)) {
          searchLocation.x= BoundaryLimitEpcc; // 
        }
        else{ // v.1.0 With long walks and minimum turns to cover more area in less time and increase chance of finding a distant cluster
          searchLocation.x = (CorridorWidthEpcc + AreaCoefficient*(abs(searchLocation.x) -CorridorWidthEpcc)/(BoundaryLimitEpcc) );
        }

        searchLocation.y = rng->uniformReal(-BoundaryLimitEpcc,-CorridorWidthEpcc);
        if (searchLocation.y<=(-LongRangeCoefficient*BoundaryLimitEpcc)) {
          searchLocation.y= -BoundaryLimitEpcc; //
        }
        else{
          searchLocation.y = -(CorridorWidthEpcc + AreaCoefficient*(abs(searchLocation.y) -CorridorWidthEpcc)/(BoundaryLimitEpcc) );
        }        
      }
    }  
    
    //if ( (abs(currentLocation.x) > (1.5*BoundaryLimitEpcc) ) || ((abs(currentLocation.y) > (1.5*BoundaryLimitEpcc) ))) {
    //  BigArena=2+BigArena;
    //}
   

    searchLocation.theta = atan2(abs(searchLocation.y - currentLocation.y), abs(searchLocation.x - currentLocation.x) );
    //epcc Adding and anglular displacement to assure quadrant location
    if ((searchLocation.x < currentLocation.x) && (searchLocation.y > currentLocation.y)) {
      //epcc  new theta is in second quadrant
      searchLocation.theta = M_PI -searchLocation.theta;
      }
      else if  ((searchLocation.x > currentLocation.x) && (searchLocation.y < currentLocation.y)) {
        //epcc  new theta is in fourth quadrant
        searchLocation.theta = -searchLocation.theta;  
      }
      else if  ((searchLocation.x <currentLocation.x) && (searchLocation.y <currentLocation.y)) {
        //epcc  new theta is in third quadrant
        searchLocation.theta = M_PI +searchLocation.theta;
      }
    }

    result.wpts.waypoints.clear();
    result.wpts.waypoints.insert(result.wpts.waypoints.begin(), searchLocation);
    
    return result;
  }

}

void SearchController::SetCenterLocation(Point centerLocation) {
  
  float diffX = this->centerLocation.x - centerLocation.x;
  float diffY = this->centerLocation.y - centerLocation.y;
  this->centerLocation = centerLocation;
  
  if (!result.wpts.waypoints.empty())
  {
  result.wpts.waypoints.back().x -= diffX;
  result.wpts.waypoints.back().y -= diffY;
  }
  
}

void SearchController::SetCurrentLocation(Point currentLocation) {
  this->currentLocation = currentLocation;
}

void SearchController::ProcessData() {
}

bool SearchController::ShouldInterrupt(){
  ProcessData();

  return false;
}

bool SearchController::HasWork() {
  return true;
}

void SearchController::SetSuccesfullPickup() {
  succesfullPickup = true;
}
