;; Auto-generated. Do not edit!


(when (boundp 'swarmie_msgs::Waypoint)
  (if (not (find-package "SWARMIE_MSGS"))
    (make-package "SWARMIE_MSGS"))
  (shadow 'Waypoint (find-package "SWARMIE_MSGS")))
(unless (find-package "SWARMIE_MSGS::WAYPOINT")
  (make-package "SWARMIE_MSGS::WAYPOINT"))

(in-package "ROS")
;;//! \htmlinclude Waypoint.msg.html


(intern "*ACTION_ADD*" (find-package "SWARMIE_MSGS::WAYPOINT"))
(shadow '*ACTION_ADD* (find-package "SWARMIE_MSGS::WAYPOINT"))
(defconstant swarmie_msgs::Waypoint::*ACTION_ADD* 0)
(intern "*ACTION_REMOVE*" (find-package "SWARMIE_MSGS::WAYPOINT"))
(shadow '*ACTION_REMOVE* (find-package "SWARMIE_MSGS::WAYPOINT"))
(defconstant swarmie_msgs::Waypoint::*ACTION_REMOVE* 1)
(intern "*ACTION_REACHED*" (find-package "SWARMIE_MSGS::WAYPOINT"))
(shadow '*ACTION_REACHED* (find-package "SWARMIE_MSGS::WAYPOINT"))
(defconstant swarmie_msgs::Waypoint::*ACTION_REACHED* 2)
(defclass swarmie_msgs::Waypoint
  :super ros::object
  :slots (_action _id _x _y ))

(defmethod swarmie_msgs::Waypoint
  (:init
   (&key
    ((:action __action) 0)
    ((:id __id) 0)
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    )
   (send-super :init)
   (setq _action (round __action))
   (setq _id (round __id))
   (setq _x (float __x))
   (setq _y (float __y))
   self)
  (:action
   (&optional __action)
   (if __action (setq _action __action)) _action)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:serialization-length
   ()
   (+
    ;; uint32 _action
    4
    ;; uint32 _id
    4
    ;; float32 _x
    4
    ;; float32 _y
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _action
       (write-long _action s)
     ;; uint32 _id
       (write-long _id s)
     ;; float32 _x
       (sys::poke _x (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _y
       (sys::poke _y (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _action
     (setq _action (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _id
     (setq _id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _x
     (setq _x (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _y
     (setq _y (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get swarmie_msgs::Waypoint :md5sum-) "bca889e1ccc791398deb93b9d6ed5f04")
(setf (get swarmie_msgs::Waypoint :datatype-) "swarmie_msgs/Waypoint")
(setf (get swarmie_msgs::Waypoint :definition-)
      "# Defines a labeled point
uint32 ACTION_ADD=0
uint32 ACTION_REMOVE=1
uint32 ACTION_REACHED=2
uint32 action
uint32 id
float32 x
float32 y
")



(provide :swarmie_msgs/Waypoint "bca889e1ccc791398deb93b9d6ed5f04")


