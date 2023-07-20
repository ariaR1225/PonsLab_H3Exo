;; Auto-generated. Do not edit!


(when (boundp 'h3_msgs::Joint)
  (if (not (find-package "H3_MSGS"))
    (make-package "H3_MSGS"))
  (shadow 'Joint (find-package "H3_MSGS")))
(unless (find-package "H3_MSGS::JOINT")
  (make-package "H3_MSGS::JOINT"))
(unless (find-package "H3_MSGS::JOINTREQUEST")
  (make-package "H3_MSGS::JOINTREQUEST"))
(unless (find-package "H3_MSGS::JOINTRESPONSE")
  (make-package "H3_MSGS::JOINTRESPONSE"))

(in-package "ROS")





(defclass h3_msgs::JointRequest
  :super ros::object
  :slots (_right_hip _right_knee _right_ankle _left_hip _left_knee _left_ankle ))

(defmethod h3_msgs::JointRequest
  (:init
   (&key
    ((:right_hip __right_hip) 0.0)
    ((:right_knee __right_knee) 0.0)
    ((:right_ankle __right_ankle) 0.0)
    ((:left_hip __left_hip) 0.0)
    ((:left_knee __left_knee) 0.0)
    ((:left_ankle __left_ankle) 0.0)
    )
   (send-super :init)
   (setq _right_hip (float __right_hip))
   (setq _right_knee (float __right_knee))
   (setq _right_ankle (float __right_ankle))
   (setq _left_hip (float __left_hip))
   (setq _left_knee (float __left_knee))
   (setq _left_ankle (float __left_ankle))
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
    ;; float64 _right_hip
    8
    ;; float64 _right_knee
    8
    ;; float64 _right_ankle
    8
    ;; float64 _left_hip
    8
    ;; float64 _left_knee
    8
    ;; float64 _left_ankle
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _right_hip
       (sys::poke _right_hip (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _right_knee
       (sys::poke _right_knee (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _right_ankle
       (sys::poke _right_ankle (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _left_hip
       (sys::poke _left_hip (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _left_knee
       (sys::poke _left_knee (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _left_ankle
       (sys::poke _left_ankle (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _right_hip
     (setq _right_hip (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _right_knee
     (setq _right_knee (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _right_ankle
     (setq _right_ankle (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _left_hip
     (setq _left_hip (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _left_knee
     (setq _left_knee (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _left_ankle
     (setq _left_ankle (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass h3_msgs::JointResponse
  :super ros::object
  :slots (_success ))

(defmethod h3_msgs::JointResponse
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

(defclass h3_msgs::Joint
  :super ros::object
  :slots ())

(setf (get h3_msgs::Joint :md5sum-) "98e232ffcfd0fe1cbfc298199f488310")
(setf (get h3_msgs::Joint :datatype-) "h3_msgs/Joint")
(setf (get h3_msgs::Joint :request) h3_msgs::JointRequest)
(setf (get h3_msgs::Joint :response) h3_msgs::JointResponse)

(defmethod h3_msgs::JointRequest
  (:response () (instance h3_msgs::JointResponse :init)))

(setf (get h3_msgs::JointRequest :md5sum-) "98e232ffcfd0fe1cbfc298199f488310")
(setf (get h3_msgs::JointRequest :datatype-) "h3_msgs/JointRequest")
(setf (get h3_msgs::JointRequest :definition-)
      "# Set minimum angles, maximum angles and percentage of assistance.
float64 right_hip
float64 right_knee
float64 right_ankle
float64 left_hip
float64 left_knee
float64 left_ankle
---
bool success
")

(setf (get h3_msgs::JointResponse :md5sum-) "98e232ffcfd0fe1cbfc298199f488310")
(setf (get h3_msgs::JointResponse :datatype-) "h3_msgs/JointResponse")
(setf (get h3_msgs::JointResponse :definition-)
      "# Set minimum angles, maximum angles and percentage of assistance.
float64 right_hip
float64 right_knee
float64 right_ankle
float64 left_hip
float64 left_knee
float64 left_ankle
---
bool success
")



(provide :h3_msgs/Joint "98e232ffcfd0fe1cbfc298199f488310")


