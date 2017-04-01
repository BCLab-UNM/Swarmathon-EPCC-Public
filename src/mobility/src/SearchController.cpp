#include "SearchController.h"



SearchController::SearchController() {

  rng = new random_numbers::RandomNumberGenerator();

}


/**

 * This code implements a basic random walk search.

 */

geometry_msgs::Pose2D SearchController::search(geometry_msgs::Pose2D currentLocation, int NUMpublishedNameEPCC, bool WeAreInPrelimCompetitionEPCC, int ModeOfSearchEPCC) {

  geometry_msgs::Pose2D goalLocation;



//epcc_robot_individual behavior

    float Boundary;

    float TropicLimit;
    float avoidCenter=1.6;
    float decideUp=1;

    bool testingNestSafety=false;



  if (!testingNestSafety){
      if (WeAreInPrelimCompetitionEPCC){
        Boundary=7.5;
        TropicLimit=3;
      }else{
        Boundary=11.55;
        TropicLimit=4;
      }
  }else{
        Boundary=3;
        goalLocation.x = rng->uniformReal(-Boundary,Boundary);   
        goalLocation.y = rng->uniformReal(-Boundary,Boundary); 
  }


if (!testingNestSafety){
    if (WeAreInPrelimCompetitionEPCC){
      if(NUMpublishedNameEPCC==3){ //"ajax=3"

        goalLocation.x = rng->uniformReal(-Boundary,Boundary);   

        goalLocation.y = rng->uniformReal(TropicLimit,Boundary);   

      }

      else if (NUMpublishedNameEPCC==1){ //"achilles=1"

        goalLocation.x = rng->uniformReal(-Boundary,Boundary);
        goalLocation.y = rng->uniformReal(-TropicLimit,TropicLimit);
      //       goalLocation.x = rng->uniformReal(-3,3);
      //  goalLocation.y = rng->uniformReal(-3,3);

        if ( abs(goalLocation.x)< avoidCenter ) { // avoiding the center
            decideUp = rng->uniformReal(-1,1); 
            if (decideUp>0){
              goalLocation.y = rng->uniformReal(avoidCenter,TropicLimit);
            }else{
              goalLocation.y = rng->uniformReal(-avoidCenter,-TropicLimit); 
            }
        }
      }else if (NUMpublishedNameEPCC==2){ //"aeneas=2"
        goalLocation.x = rng->uniformReal(-Boundary,Boundary); 
        goalLocation.y = rng->uniformReal(-Boundary,-TropicLimit);   
      }
    }              


    else if (! WeAreInPrelimCompetitionEPCC){ // we are in finals


      if(NUMpublishedNameEPCC==1){ //"achilles=1"
        goalLocation.x = rng->uniformReal(-Boundary,0);
        goalLocation.y = rng->uniformReal(-TropicLimit,TropicLimit);  
        if ( abs(goalLocation.x)< avoidCenter ) { // avoiding the center
            decideUp = rng->uniformReal(-1,1); 
            if (decideUp>0){
              goalLocation.y = rng->uniformReal(avoidCenter,TropicLimit); // we are in finals
            }else{
              goalLocation.y = rng->uniformReal(-avoidCenter,-TropicLimit); // we are in finals
            }
        }
      }
      else if (NUMpublishedNameEPCC==2){ //"aeneas=2"
        goalLocation.x = rng->uniformReal(0,Boundary);   
        goalLocation.y = rng->uniformReal(-Boundary,-TropicLimit);// we are in finals
      }
      else if (NUMpublishedNameEPCC==3){ //"ajax=3"
        goalLocation.x = rng->uniformReal(0,Boundary); 
        goalLocation.y = rng->uniformReal(-TropicLimit,TropicLimit);      
        if ( abs(goalLocation.x)< avoidCenter ) { // avoiding the center
            decideUp = rng->uniformReal(-1,1); 
            if (decideUp>0){
              goalLocation.y = rng->uniformReal(avoidCenter,TropicLimit); // we are in finals
            }else{
              goalLocation.y = rng->uniformReal(-avoidCenter,-TropicLimit); // we are in finals
            }
        }
      }
      else if(NUMpublishedNameEPCC==4){ //"hector=4"
        goalLocation.x = rng->uniformReal(0,Boundary);
        goalLocation.y = rng->uniformReal(TropicLimit,Boundary); // we are in finals
      }
      else if (NUMpublishedNameEPCC==6){//"diomedes=6"
        goalLocation.x = rng->uniformReal(0,-Boundary); 
        goalLocation.y = rng->uniformReal(TropicLimit,Boundary);
      }
      else if (NUMpublishedNameEPCC==5){//"paris=5"
        goalLocation.x = rng->uniformReal(-Boundary,0);   
        goalLocation.y = rng->uniformReal(-Boundary,-TropicLimit);
      }
    }
  }

    

    //epcc EV this function calculates absolute goal location ANGLE

    goalLocation.theta = atan2(abs(goalLocation.y - currentLocation.y), abs(goalLocation.x - currentLocation.x) );

                    

    //epcc EV we need to assure correct quadrant of goal location ANGLE

    if ((goalLocation.x < currentLocation.x) && (goalLocation.y > currentLocation.y)) {

      //epcc EV new theta is in second quadrant

      goalLocation.theta = M_PI -goalLocation.theta;

    }else if  ((goalLocation.x > currentLocation.x) && (goalLocation.y < currentLocation.y)) {

      //epcc EV new theta is in fourth quadrant

      goalLocation.theta = -goalLocation.theta;

    }else if  ((goalLocation.x < currentLocation.x) && (goalLocation.y < currentLocation.y)) {

      //epcc EV new theta is in third quadrant

      goalLocation.theta = M_PI +goalLocation.theta;

    }

    //epcc EV no need to add another if for 1st quadrant because its the default one





  return goalLocation;

}



/**

 * Continues search pattern after interruption. For example, avoiding the

 * center or collisions.

 */

geometry_msgs::Pose2D SearchController::continueInterruptedSearch(geometry_msgs::Pose2D currentLocation, geometry_msgs::Pose2D oldGoalLocation) {

  geometry_msgs::Pose2D newGoalLocation;



  //remainingGoalDist avoids magic numbers by calculating the dist

  double remainingGoalDist = hypot(oldGoalLocation.x - currentLocation.x, oldGoalLocation.y - currentLocation.y);



  //this of course assumes random walk continuation. Change for diffrent search methods.

  newGoalLocation.theta = oldGoalLocation.theta;

  newGoalLocation.x = currentLocation.x + (0.50 * cos(oldGoalLocation.theta)); //(remainingGoalDist * cos(oldGoalLocation.theta));

  newGoalLocation.y = currentLocation.y + (0.50 * sin(oldGoalLocation.theta)); //(remainingGoalDist * sin(oldGoalLocation.theta));



  return newGoalLocation;

}