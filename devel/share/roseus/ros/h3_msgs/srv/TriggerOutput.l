;; Auto-generated. Do not edit!


(when (boundp 'h3_msgs::TriggerOutput)
  (if (not (find-package "H3_MSGS"))
    (make-package "H3_MSGS"))
  (shadow 'TriggerOutput (find-package "H3_MSGS")))
(unless (find-package "H3_MSGS::TRIGGEROUTPUT")
  (make-package "H3_MSGS::TRIGGEROUTPUT"))
(unless (find-package "H3_MSGS::TRIGGEROUTPUTREQUEST")
  (make-package "H3_MSGS::TRIGGEROUTPUTREQUEST"))
(unless (find-package "H3_MSGS::TRIGGEROUTPUTRESPONSE")
  (make-package "H3_MSGS::TRIGGEROUTPUTRESPONSE"))

(in-package "ROS")





(intern "*TRIGGER_OUTPUT_PIN_LOW*" (find-package "H3_MSGS::TRIGGEROUTPUTREQUEST"))
(shadow '*TRIGGER_OUTPUT_PIN_LOW* (find-package "H3_MSGS::TRIGGEROUTPUTREQUEST"))
(defconstant h3_msgs::TriggerOutputRequest::*TRIGGER_OUTPUT_PIN_LOW* 0)
(intern "*TRIGGER_OUTPUT_PIN_PULSE*" (find-package "H3_MSGS::TRIGGEROUTPUTREQUEST"))
(shadow '*TRIGGER_OUTPUT_PIN_PULSE* (find-package "H3_MSGS::TRIGGEROUTPUTREQUEST"))
(defconstant h3_msgs::TriggerOutputRequest::*TRIGGER_OUTPUT_PIN_PULSE* 1)
(intern "*TRIGGER_OUTPUT_PIN_HIGH*" (find-package "H3_MSGS::TRIGGEROUTPUTREQUEST"))
(shadow '*TRIGGER_OUTPUT_PIN_HIGH* (find-package "H3_MSGS::TRIGGEROUTPUTREQUEST"))
(defconstant h3_msgs::TriggerOutputRequest::*TRIGGER_OUTPUT_PIN_HIGH* 2)

(defun h3_msgs::TriggerOutputRequest-to-symbol (const)
  (cond
        ((= const 0) 'h3_msgs::TriggerOutputRequest::*TRIGGER_OUTPUT_PIN_LOW*)
        ((= const 1) 'h3_msgs::TriggerOutputRequest::*TRIGGER_OUTPUT_PIN_PULSE*)
        ((= const 2) 'h3_msgs::TriggerOutputRequest::*TRIGGER_OUTPUT_PIN_HIGH*)
        (t nil)))

(defclass h3_msgs::TriggerOutputRequest
  :super ros::object
  :slots (_trigger_output ))

(defmethod h3_msgs::TriggerOutputRequest
  (:init
   (&key
    ((:trigger_output __trigger_output) 0)
    )
   (send-super :init)
   (setq _trigger_output (round __trigger_output))
   self)
  (:trigger_output
   (&optional __trigger_output)
   (if __trigger_output (setq _trigger_output __trigger_output)) _trigger_output)
  (:serialization-length
   ()
   (+
    ;; uint8 _trigger_output
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _trigger_output
       (write-byte _trigger_output s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _trigger_output
     (setq _trigger_output (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass h3_msgs::TriggerOutputResponse
  :super ros::object
  :slots (_success ))

(defmethod h3_msgs::TriggerOutputResponse
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

(defclass h3_msgs::TriggerOutput
  :super ros::object
  :slots ())

(setf (get h3_msgs::TriggerOutput :md5sum-) "12bdd23eb6cb70720a3a754d3f099d35")
(setf (get h3_msgs::TriggerOutput :datatype-) "h3_msgs/TriggerOutput")
(setf (get h3_msgs::TriggerOutput :request) h3_msgs::TriggerOutputRequest)
(setf (get h3_msgs::TriggerOutput :response) h3_msgs::TriggerOutputResponse)

(defmethod h3_msgs::TriggerOutputRequest
  (:response () (instance h3_msgs::TriggerOutputResponse :init)))

(setf (get h3_msgs::TriggerOutputRequest :md5sum-) "12bdd23eb6cb70720a3a754d3f099d35")
(setf (get h3_msgs::TriggerOutputRequest :datatype-) "h3_msgs/TriggerOutputRequest")
(setf (get h3_msgs::TriggerOutputRequest :definition-)
      "# Set trigger output pin.
uint8 TRIGGER_OUTPUT_PIN_LOW = 0
uint8 TRIGGER_OUTPUT_PIN_PULSE = 1
uint8 TRIGGER_OUTPUT_PIN_HIGH = 2
uint8 trigger_output
---
bool success

")

(setf (get h3_msgs::TriggerOutputResponse :md5sum-) "12bdd23eb6cb70720a3a754d3f099d35")
(setf (get h3_msgs::TriggerOutputResponse :datatype-) "h3_msgs/TriggerOutputResponse")
(setf (get h3_msgs::TriggerOutputResponse :definition-)
      "# Set trigger output pin.
uint8 TRIGGER_OUTPUT_PIN_LOW = 0
uint8 TRIGGER_OUTPUT_PIN_PULSE = 1
uint8 TRIGGER_OUTPUT_PIN_HIGH = 2
uint8 trigger_output
---
bool success

")



(provide :h3_msgs/TriggerOutput "12bdd23eb6cb70720a3a754d3f099d35")


