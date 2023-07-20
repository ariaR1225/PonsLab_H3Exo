;; Auto-generated. Do not edit!


(when (boundp 'h3_msgs::ControlType)
  (if (not (find-package "H3_MSGS"))
    (make-package "H3_MSGS"))
  (shadow 'ControlType (find-package "H3_MSGS")))
(unless (find-package "H3_MSGS::CONTROLTYPE")
  (make-package "H3_MSGS::CONTROLTYPE"))
(unless (find-package "H3_MSGS::CONTROLTYPEREQUEST")
  (make-package "H3_MSGS::CONTROLTYPEREQUEST"))
(unless (find-package "H3_MSGS::CONTROLTYPERESPONSE")
  (make-package "H3_MSGS::CONTROLTYPERESPONSE"))

(in-package "ROS")





(intern "*NO_CONTROL*" (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(shadow '*NO_CONTROL* (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(defconstant h3_msgs::ControlTypeRequest::*NO_CONTROL* 0)
(intern "*POSITION_CONTROL*" (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(shadow '*POSITION_CONTROL* (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(defconstant h3_msgs::ControlTypeRequest::*POSITION_CONTROL* 1)
(intern "*STIFFNESS_CONTROL*" (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(shadow '*STIFFNESS_CONTROL* (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(defconstant h3_msgs::ControlTypeRequest::*STIFFNESS_CONTROL* 2)
(intern "*TORQUE_CONTROL*" (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(shadow '*TORQUE_CONTROL* (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(defconstant h3_msgs::ControlTypeRequest::*TORQUE_CONTROL* 3)
(intern "*MOTOR_DISABLED*" (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(shadow '*MOTOR_DISABLED* (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(defconstant h3_msgs::ControlTypeRequest::*MOTOR_DISABLED* 4)
(intern "*MOTOR_STOPPED*" (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(shadow '*MOTOR_STOPPED* (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(defconstant h3_msgs::ControlTypeRequest::*MOTOR_STOPPED* 5)
(intern "*OPEN_LOOP*" (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(shadow '*OPEN_LOOP* (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(defconstant h3_msgs::ControlTypeRequest::*OPEN_LOOP* 6)
(intern "*TASK_CONTROLLER*" (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(shadow '*TASK_CONTROLLER* (find-package "H3_MSGS::CONTROLTYPEREQUEST"))
(defconstant h3_msgs::ControlTypeRequest::*TASK_CONTROLLER* 7)

(defun h3_msgs::ControlTypeRequest-to-symbol (const)
  (cond
        ((= const 0) 'h3_msgs::ControlTypeRequest::*NO_CONTROL*)
        ((= const 1) 'h3_msgs::ControlTypeRequest::*POSITION_CONTROL*)
        ((= const 2) 'h3_msgs::ControlTypeRequest::*STIFFNESS_CONTROL*)
        ((= const 3) 'h3_msgs::ControlTypeRequest::*TORQUE_CONTROL*)
        ((= const 4) 'h3_msgs::ControlTypeRequest::*MOTOR_DISABLED*)
        ((= const 5) 'h3_msgs::ControlTypeRequest::*MOTOR_STOPPED*)
        ((= const 6) 'h3_msgs::ControlTypeRequest::*OPEN_LOOP*)
        ((= const 7) 'h3_msgs::ControlTypeRequest::*TASK_CONTROLLER*)
        (t nil)))

(defclass h3_msgs::ControlTypeRequest
  :super ros::object
  :slots (_right_hip _right_knee _right_ankle _left_hip _left_knee _left_ankle ))

(defmethod h3_msgs::ControlTypeRequest
  (:init
   (&key
    ((:right_hip __right_hip) 0)
    ((:right_knee __right_knee) 0)
    ((:right_ankle __right_ankle) 0)
    ((:left_hip __left_hip) 0)
    ((:left_knee __left_knee) 0)
    ((:left_ankle __left_ankle) 0)
    )
   (send-super :init)
   (setq _right_hip (round __right_hip))
   (setq _right_knee (round __right_knee))
   (setq _right_ankle (round __right_ankle))
   (setq _left_hip (round __left_hip))
   (setq _left_knee (round __left_knee))
   (setq _left_ankle (round __left_ankle))
   self)
  (:right_hip
   (&optional __right_hip)
   (if __right_hip (setq _right_hip __right_hip)) _right_hip)
  (:right_knee
   (&optional __right_knee)
   (if __right_knee (setq _right_knee __right_knee)) _right_knee)
  (:right_ankle
   (&optional __right_ankle)
   (if __right_ankle (setq _right_ankle __right_ankle)) _right_ankle)
  (:left_hip
   (&optional __left_hip)
   (if __left_hip (setq _left_hip __left_hip)) _left_hip)
  (:left_knee
   (&optional __left_knee)
   (if __left_knee (setq _left_knee __left_knee)) _left_knee)
  (:left_ankle
   (&optional __left_ankle)
   (if __left_ankle (setq _left_ankle __left_ankle)) _left_ankle)
  (:serialization-length
   ()
   (+
    ;; uint8 _right_hip
    1
    ;; uint8 _right_knee
    1
    ;; uint8 _right_ankle
    1
    ;; uint8 _left_hip
    1
    ;; uint8 _left_knee
    1
    ;; uint8 _left_ankle
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _right_hip
       (write-byte _right_hip s)
     ;; uint8 _right_knee
       (write-byte _right_knee s)
     ;; uint8 _right_ankle
       (write-byte _right_ankle s)
     ;; uint8 _left_hip
       (write-byte _left_hip s)
     ;; uint8 _left_knee
       (write-byte _left_knee s)
     ;; uint8 _left_ankle
       (write-byte _left_ankle s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _right_hip
     (setq _right_hip (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _right_knee
     (setq _right_knee (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _right_ankle
     (setq _right_ankle (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _left_hip
     (setq _left_hip (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _left_knee
     (setq _left_knee (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _left_ankle
     (setq _left_ankle (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass h3_msgs::ControlTypeResponse
  :super ros::object
  :slots (_success ))

(defmethod h3_msgs::ControlTypeResponse
  (:init
   (&key
    ((:success __success) nil)
    )
   (send-super :init)
   (setq _success __success)
   self)
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass h3_msgs::ControlType
  :super ros::object
  :slots ())

(setf (get h3_msgs::ControlType :md5sum-) "af261c0e31694c5bbb9f582a2605febd")
(setf (get h3_msgs::ControlType :datatype-) "h3_msgs/ControlType")
(setf (get h3_msgs::ControlType :request) h3_msgs::ControlTypeRequest)
(setf (get h3_msgs::ControlType :response) h3_msgs::ControlTypeResponse)

(defmethod h3_msgs::ControlTypeRequest
  (:response () (instance h3_msgs::ControlTypeResponse :init)))

(setf (get h3_msgs::ControlTypeRequest :md5sum-) "af261c0e31694c5bbb9f582a2605febd")
(setf (get h3_msgs::ControlTypeRequest :datatype-) "h3_msgs/ControlTypeRequest")
(setf (get h3_msgs::ControlTypeRequest :definition-)
      "# Select a control type for each joint
uint8 NO_CONTROL = 0
uint8 POSITION_CONTROL = 1
uint8 STIFFNESS_CONTROL = 2
uint8 TORQUE_CONTROL = 3
uint8 MOTOR_DISABLED = 4
uint8 MOTOR_STOPPED = 5
uint8 OPEN_LOOP = 6
uint8 TASK_CONTROLLER = 7
uint8 right_hip
uint8 right_knee
uint8 right_ankle
uint8 left_hip
uint8 left_knee
uint8 left_ankle
---
bool success


")

(setf (get h3_msgs::ControlTypeResponse :md5sum-) "af261c0e31694c5bbb9f582a2605febd")
(setf (get h3_msgs::ControlTypeResponse :datatype-) "h3_msgs/ControlTypeResponse")
(setf (get h3_msgs::ControlTypeResponse :definition-)
      "# Select a control type for each joint
uint8 NO_CONTROL = 0
uint8 POSITION_CONTROL = 1
uint8 STIFFNESS_CONTROL = 2
uint8 TORQUE_CONTROL = 3
uint8 MOTOR_DISABLED = 4
uint8 MOTOR_STOPPED = 5
uint8 OPEN_LOOP = 6
uint8 TASK_CONTROLLER = 7
uint8 right_hip
uint8 right_knee
uint8 right_ankle
uint8 left_hip
uint8 left_knee
uint8 left_ankle
---
bool success


")



(provide :h3_msgs/ControlType "af261c0e31694c5bbb9f582a2605febd")


