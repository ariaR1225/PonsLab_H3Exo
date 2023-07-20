;; Auto-generated. Do not edit!


(when (boundp 'h3_msgs::DataRecording)
  (if (not (find-package "H3_MSGS"))
    (make-package "H3_MSGS"))
  (shadow 'DataRecording (find-package "H3_MSGS")))
(unless (find-package "H3_MSGS::DATARECORDING")
  (make-package "H3_MSGS::DATARECORDING"))
(unless (find-package "H3_MSGS::DATARECORDINGREQUEST")
  (make-package "H3_MSGS::DATARECORDINGREQUEST"))
(unless (find-package "H3_MSGS::DATARECORDINGRESPONSE")
  (make-package "H3_MSGS::DATARECORDINGRESPONSE"))

(in-package "ROS")





(intern "*SW_STOP_MODE*" (find-package "H3_MSGS::DATARECORDINGREQUEST"))
(shadow '*SW_STOP_MODE* (find-package "H3_MSGS::DATARECORDINGREQUEST"))
(defconstant h3_msgs::DataRecordingRequest::*SW_STOP_MODE* 0)
(intern "*SW_START_MODE*" (find-package "H3_MSGS::DATARECORDINGREQUEST"))
(shadow '*SW_START_MODE* (find-package "H3_MSGS::DATARECORDINGREQUEST"))
(defconstant h3_msgs::DataRecordingRequest::*SW_START_MODE* 1)
(intern "*TRIGGER_INPUT_PULSE_MODE*" (find-package "H3_MSGS::DATARECORDINGREQUEST"))
(shadow '*TRIGGER_INPUT_PULSE_MODE* (find-package "H3_MSGS::DATARECORDINGREQUEST"))
(defconstant h3_msgs::DataRecordingRequest::*TRIGGER_INPUT_PULSE_MODE* 2)
(intern "*TRIGGER_INPUT_HIGH_MODE*" (find-package "H3_MSGS::DATARECORDINGREQUEST"))
(shadow '*TRIGGER_INPUT_HIGH_MODE* (find-package "H3_MSGS::DATARECORDINGREQUEST"))
(defconstant h3_msgs::DataRecordingRequest::*TRIGGER_INPUT_HIGH_MODE* 3)
(intern "*TRIGGER_OUTPUT_PULSE_MODE*" (find-package "H3_MSGS::DATARECORDINGREQUEST"))
(shadow '*TRIGGER_OUTPUT_PULSE_MODE* (find-package "H3_MSGS::DATARECORDINGREQUEST"))
(defconstant h3_msgs::DataRecordingRequest::*TRIGGER_OUTPUT_PULSE_MODE* 4)
(intern "*TRIGGER_OUTPUT_HIGH_MODE*" (find-package "H3_MSGS::DATARECORDINGREQUEST"))
(shadow '*TRIGGER_OUTPUT_HIGH_MODE* (find-package "H3_MSGS::DATARECORDINGREQUEST"))
(defconstant h3_msgs::DataRecordingRequest::*TRIGGER_OUTPUT_HIGH_MODE* 5)

(defun h3_msgs::DataRecordingRequest-to-symbol (const)
  (cond
        ((= const 0) 'h3_msgs::DataRecordingRequest::*SW_STOP_MODE*)
        ((= const 1) 'h3_msgs::DataRecordingRequest::*SW_START_MODE*)
        ((= const 2) 'h3_msgs::DataRecordingRequest::*TRIGGER_INPUT_PULSE_MODE*)
        ((= const 3) 'h3_msgs::DataRecordingRequest::*TRIGGER_INPUT_HIGH_MODE*)
        ((= const 4) 'h3_msgs::DataRecordingRequest::*TRIGGER_OUTPUT_PULSE_MODE*)
        ((= const 5) 'h3_msgs::DataRecordingRequest::*TRIGGER_OUTPUT_HIGH_MODE*)
        (t nil)))

(defclass h3_msgs::DataRecordingRequest
  :super ros::object
  :slots (_recording_trigger_mode _file_base_name _timed _duration_time ))

(defmethod h3_msgs::DataRecordingRequest
  (:init
   (&key
    ((:recording_trigger_mode __recording_trigger_mode) 0)
    ((:file_base_name __file_base_name) "")
    ((:timed __timed) nil)
    ((:duration_time __duration_time) 0.0)
    )
   (send-super :init)
   (setq _recording_trigger_mode (round __recording_trigger_mode))
   (setq _file_base_name (string __file_base_name))
   (setq _timed __timed)
   (setq _duration_time (float __duration_time))
   self)
  (:recording_trigger_mode
   (&optional __recording_trigger_mode)
   (if __recording_trigger_mode (setq _recording_trigger_mode __recording_trigger_mode)) _recording_trigger_mode)
  (:file_base_name
   (&optional __file_base_name)
   (if __file_base_name (setq _file_base_name __file_base_name)) _file_base_name)
  (:timed
   (&optional (__timed :null))
   (if (not (eq __timed :null)) (setq _timed __timed)) _timed)
  (:duration_time
   (&optional __duration_time)
   (if __duration_time (setq _duration_time __duration_time)) _duration_time)
  (:serialization-length
   ()
   (+
    ;; uint8 _recording_trigger_mode
    1
    ;; string _file_base_name
    4 (length _file_base_name)
    ;; bool _timed
    1
    ;; float64 _duration_time
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _recording_trigger_mode
       (write-byte _recording_trigger_mode s)
     ;; string _file_base_name
       (write-long (length _file_base_name) s) (princ _file_base_name s)
     ;; bool _timed
       (if _timed (write-byte -1 s) (write-byte 0 s))
     ;; float64 _duration_time
       (sys::poke _duration_time (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _recording_trigger_mode
     (setq _recording_trigger_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; string _file_base_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _file_base_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; bool _timed
     (setq _timed (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float64 _duration_time
     (setq _duration_time (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass h3_msgs::DataRecordingResponse
  :super ros::object
  :slots (_success ))

(defmethod h3_msgs::DataRecordingResponse
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

(defclass h3_msgs::DataRecording
  :super ros::object
  :slots ())

(setf (get h3_msgs::DataRecording :md5sum-) "35eb072519df70f467d2bd26462e08fb")
(setf (get h3_msgs::DataRecording :datatype-) "h3_msgs/DataRecording")
(setf (get h3_msgs::DataRecording :request) h3_msgs::DataRecordingRequest)
(setf (get h3_msgs::DataRecording :response) h3_msgs::DataRecordingResponse)

(defmethod h3_msgs::DataRecordingRequest
  (:response () (instance h3_msgs::DataRecordingResponse :init)))

(setf (get h3_msgs::DataRecordingRequest :md5sum-) "35eb072519df70f467d2bd26462e08fb")
(setf (get h3_msgs::DataRecordingRequest :datatype-) "h3_msgs/DataRecordingRequest")
(setf (get h3_msgs::DataRecordingRequest :definition-)
      "# Start data recording in a text file using .csv format.
# The data recording can be started/stopped by software o hardware.  
# The file is saved as file_base_name_counter.
# timed:
# true: The data recording finish when the duration_time is completed.
# false: duration_time is ignored.
# duration_time: Data recording time in (seconds.miliseconds).
uint8 SW_STOP_MODE = 0
uint8 SW_START_MODE = 1
uint8 TRIGGER_INPUT_PULSE_MODE = 2
uint8 TRIGGER_INPUT_HIGH_MODE = 3
uint8 TRIGGER_OUTPUT_PULSE_MODE = 4
uint8 TRIGGER_OUTPUT_HIGH_MODE = 5
uint8 recording_trigger_mode
string file_base_name
bool timed
float64 duration_time
---
bool success
")

(setf (get h3_msgs::DataRecordingResponse :md5sum-) "35eb072519df70f467d2bd26462e08fb")
(setf (get h3_msgs::DataRecordingResponse :datatype-) "h3_msgs/DataRecordingResponse")
(setf (get h3_msgs::DataRecordingResponse :definition-)
      "# Start data recording in a text file using .csv format.
# The data recording can be started/stopped by software o hardware.  
# The file is saved as file_base_name_counter.
# timed:
# true: The data recording finish when the duration_time is completed.
# false: duration_time is ignored.
# duration_time: Data recording time in (seconds.miliseconds).
uint8 SW_STOP_MODE = 0
uint8 SW_START_MODE = 1
uint8 TRIGGER_INPUT_PULSE_MODE = 2
uint8 TRIGGER_INPUT_HIGH_MODE = 3
uint8 TRIGGER_OUTPUT_PULSE_MODE = 4
uint8 TRIGGER_OUTPUT_HIGH_MODE = 5
uint8 recording_trigger_mode
string file_base_name
bool timed
float64 duration_time
---
bool success
")



(provide :h3_msgs/DataRecording "35eb072519df70f467d2bd26462e08fb")


