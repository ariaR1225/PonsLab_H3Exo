;; Auto-generated. Do not edit!


(when (boundp 'h3_msgs::TaskCommand)
  (if (not (find-package "H3_MSGS"))
    (make-package "H3_MSGS"))
  (shadow 'TaskCommand (find-package "H3_MSGS")))
(unless (find-package "H3_MSGS::TASKCOMMAND")
  (make-package "H3_MSGS::TASKCOMMAND"))

(in-package "ROS")
;;//! \htmlinclude TaskCommand.msg.html


(intern "*STOP_GAIT*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*STOP_GAIT* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*STOP_GAIT* 0)
(intern "*WALK_SPEED_1*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*WALK_SPEED_1* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*WALK_SPEED_1* 1)
(intern "*WALK_SPEED_2*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*WALK_SPEED_2* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*WALK_SPEED_2* 2)
(intern "*WALK_SPEED_3*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*WALK_SPEED_3* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*WALK_SPEED_3* 3)
(intern "*WALK_SPEED_4*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*WALK_SPEED_4* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*WALK_SPEED_4* 4)
(intern "*WALK_SPEED_5*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*WALK_SPEED_5* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*WALK_SPEED_5* 5)
(intern "*WALK_SPEED_6*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*WALK_SPEED_6* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*WALK_SPEED_6* 6)
(intern "*WALK_SPEED_7*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*WALK_SPEED_7* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*WALK_SPEED_7* 7)
(intern "*WALK_SPEED_8*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*WALK_SPEED_8* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*WALK_SPEED_8* 8)
(intern "*WALK_SPEED_9*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*WALK_SPEED_9* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*WALK_SPEED_9* 9)
(intern "*WALK_SPEED_10*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*WALK_SPEED_10* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*WALK_SPEED_10* 10)
(intern "*JOINTS_PASSIVE*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*JOINTS_PASSIVE* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*JOINTS_PASSIVE* 11)
(intern "*JOINTS_COMPLIANT*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*JOINTS_COMPLIANT* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*JOINTS_COMPLIANT* 12)
(intern "*STAND_UP*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*STAND_UP* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*STAND_UP* 21)
(intern "*SIT_DOWN*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*SIT_DOWN* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*SIT_DOWN* 22)
(intern "*PERFORM_RIGHT_STEP*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*PERFORM_RIGHT_STEP* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*PERFORM_RIGHT_STEP* 23)
(intern "*PERFORM_LEFT_STEP*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*PERFORM_LEFT_STEP* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*PERFORM_LEFT_STEP* 24)
(intern "*RIGHT_MAX_ASSITENCE_10*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*RIGHT_MAX_ASSITENCE_10* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_10* 31)
(intern "*RIGHT_MAX_ASSITENCE_20*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*RIGHT_MAX_ASSITENCE_20* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_20* 32)
(intern "*RIGHT_MAX_ASSITENCE_30*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*RIGHT_MAX_ASSITENCE_30* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_30* 33)
(intern "*RIGHT_MAX_ASSITENCE_40*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*RIGHT_MAX_ASSITENCE_40* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_40* 34)
(intern "*RIGHT_MAX_ASSITENCE_50*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*RIGHT_MAX_ASSITENCE_50* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_50* 35)
(intern "*RIGHT_MAX_ASSITENCE_60*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*RIGHT_MAX_ASSITENCE_60* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_60* 36)
(intern "*RIGHT_MAX_ASSITENCE_70*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*RIGHT_MAX_ASSITENCE_70* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_70* 37)
(intern "*RIGHT_MAX_ASSITENCE_80*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*RIGHT_MAX_ASSITENCE_80* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_80* 38)
(intern "*RIGHT_MAX_ASSITENCE_90*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*RIGHT_MAX_ASSITENCE_90* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_90* 39)
(intern "*RIGHT_MAX_ASSITENCE_100*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*RIGHT_MAX_ASSITENCE_100* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_100* 40)
(intern "*LEFT_MAX_ASSITENCE_10*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*LEFT_MAX_ASSITENCE_10* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_10* 41)
(intern "*LEFT_MAX_ASSITENCE_20*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*LEFT_MAX_ASSITENCE_20* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_20* 42)
(intern "*LEFT_MAX_ASSITENCE_30*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*LEFT_MAX_ASSITENCE_30* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_30* 43)
(intern "*LEFT_MAX_ASSITENCE_40*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*LEFT_MAX_ASSITENCE_40* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_40* 44)
(intern "*LEFT_MAX_ASSITENCE_50*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*LEFT_MAX_ASSITENCE_50* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_50* 45)
(intern "*LEFT_MAX_ASSITENCE_60*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*LEFT_MAX_ASSITENCE_60* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_60* 46)
(intern "*LEFT_MAX_ASSITENCE_70*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*LEFT_MAX_ASSITENCE_70* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_70* 47)
(intern "*LEFT_MAX_ASSITENCE_80*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*LEFT_MAX_ASSITENCE_80* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_80* 48)
(intern "*LEFT_MAX_ASSITENCE_90*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*LEFT_MAX_ASSITENCE_90* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_90* 49)
(intern "*LEFT_MAX_ASSITENCE_100*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*LEFT_MAX_ASSITENCE_100* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_100* 50)
(intern "*REGAIN_COMMAND*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*REGAIN_COMMAND* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*REGAIN_COMMAND* 51)
(intern "*GIVE_COMMAND*" (find-package "H3_MSGS::TASKCOMMAND"))
(shadow '*GIVE_COMMAND* (find-package "H3_MSGS::TASKCOMMAND"))
(defconstant h3_msgs::TaskCommand::*GIVE_COMMAND* 52)

(defun h3_msgs::TaskCommand-to-symbol (const)
  (cond
        ((= const 0) 'h3_msgs::TaskCommand::*STOP_GAIT*)
        ((= const 1) 'h3_msgs::TaskCommand::*WALK_SPEED_1*)
        ((= const 2) 'h3_msgs::TaskCommand::*WALK_SPEED_2*)
        ((= const 3) 'h3_msgs::TaskCommand::*WALK_SPEED_3*)
        ((= const 4) 'h3_msgs::TaskCommand::*WALK_SPEED_4*)
        ((= const 5) 'h3_msgs::TaskCommand::*WALK_SPEED_5*)
        ((= const 6) 'h3_msgs::TaskCommand::*WALK_SPEED_6*)
        ((= const 7) 'h3_msgs::TaskCommand::*WALK_SPEED_7*)
        ((= const 8) 'h3_msgs::TaskCommand::*WALK_SPEED_8*)
        ((= const 9) 'h3_msgs::TaskCommand::*WALK_SPEED_9*)
        ((= const 10) 'h3_msgs::TaskCommand::*WALK_SPEED_10*)
        ((= const 11) 'h3_msgs::TaskCommand::*JOINTS_PASSIVE*)
        ((= const 12) 'h3_msgs::TaskCommand::*JOINTS_COMPLIANT*)
        ((= const 21) 'h3_msgs::TaskCommand::*STAND_UP*)
        ((= const 22) 'h3_msgs::TaskCommand::*SIT_DOWN*)
        ((= const 23) 'h3_msgs::TaskCommand::*PERFORM_RIGHT_STEP*)
        ((= const 24) 'h3_msgs::TaskCommand::*PERFORM_LEFT_STEP*)
        ((= const 31) 'h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_10*)
        ((= const 32) 'h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_20*)
        ((= const 33) 'h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_30*)
        ((= const 34) 'h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_40*)
        ((= const 35) 'h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_50*)
        ((= const 36) 'h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_60*)
        ((= const 37) 'h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_70*)
        ((= const 38) 'h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_80*)
        ((= const 39) 'h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_90*)
        ((= const 40) 'h3_msgs::TaskCommand::*RIGHT_MAX_ASSITENCE_100*)
        ((= const 41) 'h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_10*)
        ((= const 42) 'h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_20*)
        ((= const 43) 'h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_30*)
        ((= const 44) 'h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_40*)
        ((= const 45) 'h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_50*)
        ((= const 46) 'h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_60*)
        ((= const 47) 'h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_70*)
        ((= const 48) 'h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_80*)
        ((= const 49) 'h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_90*)
        ((= const 50) 'h3_msgs::TaskCommand::*LEFT_MAX_ASSITENCE_100*)
        ((= const 51) 'h3_msgs::TaskCommand::*REGAIN_COMMAND*)
        ((= const 52) 'h3_msgs::TaskCommand::*GIVE_COMMAND*)
        (t nil)))

(defclass h3_msgs::TaskCommand
  :super ros::object
  :slots (_command ))

(defmethod h3_msgs::TaskCommand
  (:init
   (&key
    ((:command __command) 0)
    )
   (send-super :init)
   (setq _command (round __command))
   self)
  (:command
   (&optional __command)
   (if __command (setq _command __command)) _command)
  (:serialization-length
   ()
   (+
    ;; uint8 _command
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _command
       (write-byte _command s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _command
     (setq _command (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get h3_msgs::TaskCommand :md5sum-) "88f3fcfe7dd2fcc45f8a0dedd7fc97b6")
(setf (get h3_msgs::TaskCommand :datatype-) "h3_msgs/TaskCommand")
(setf (get h3_msgs::TaskCommand :definition-)
      "uint8 STOP_GAIT = 0
uint8 WALK_SPEED_1 = 1
uint8 WALK_SPEED_2 = 2
uint8 WALK_SPEED_3 = 3
uint8 WALK_SPEED_4 = 4
uint8 WALK_SPEED_5 = 5
uint8 WALK_SPEED_6 = 6
uint8 WALK_SPEED_7 = 7
uint8 WALK_SPEED_8 = 8
uint8 WALK_SPEED_9 = 9
uint8 WALK_SPEED_10 = 10
uint8 JOINTS_PASSIVE = 11
uint8 JOINTS_COMPLIANT = 12
uint8 STAND_UP = 21
uint8 SIT_DOWN = 22
uint8 PERFORM_RIGHT_STEP = 23
uint8 PERFORM_LEFT_STEP = 24
uint8 RIGHT_MAX_ASSITENCE_10 = 31
uint8 RIGHT_MAX_ASSITENCE_20 = 32
uint8 RIGHT_MAX_ASSITENCE_30 = 33
uint8 RIGHT_MAX_ASSITENCE_40 = 34
uint8 RIGHT_MAX_ASSITENCE_50 = 35
uint8 RIGHT_MAX_ASSITENCE_60 = 36
uint8 RIGHT_MAX_ASSITENCE_70 = 37
uint8 RIGHT_MAX_ASSITENCE_80 = 38
uint8 RIGHT_MAX_ASSITENCE_90 = 39
uint8 RIGHT_MAX_ASSITENCE_100 = 40
uint8 LEFT_MAX_ASSITENCE_10 = 41
uint8 LEFT_MAX_ASSITENCE_20 = 42
uint8 LEFT_MAX_ASSITENCE_30 = 43
uint8 LEFT_MAX_ASSITENCE_40 = 44
uint8 LEFT_MAX_ASSITENCE_50 = 45
uint8 LEFT_MAX_ASSITENCE_60 = 46
uint8 LEFT_MAX_ASSITENCE_70 = 47
uint8 LEFT_MAX_ASSITENCE_80 = 48
uint8 LEFT_MAX_ASSITENCE_90 = 49
uint8 LEFT_MAX_ASSITENCE_100 = 50
uint8 REGAIN_COMMAND = 51
uint8 GIVE_COMMAND = 52
uint8  command
")



(provide :h3_msgs/TaskCommand "88f3fcfe7dd2fcc45f8a0dedd7fc97b6")


