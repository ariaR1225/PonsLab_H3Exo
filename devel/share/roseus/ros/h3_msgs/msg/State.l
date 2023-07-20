;; Auto-generated. Do not edit!


(when (boundp 'h3_msgs::State)
  (if (not (find-package "H3_MSGS"))
    (make-package "H3_MSGS"))
  (shadow 'State (find-package "H3_MSGS")))
(unless (find-package "H3_MSGS::STATE")
  (make-package "H3_MSGS::STATE"))

(in-package "ROS")
;;//! \htmlinclude State.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass h3_msgs::State
  :super ros::object
  :slots (_header _name _status _joint_name _joint_control_type _joint_position _joint_velocity _joint_motor_torque _joint_torque_sensor _battery_voltage _right_heel_sensor _right_toe_sensor _left_heel_sensor _left_toe_sensor _trigger_input _command_app _trigger_counter _runtime_min _runtime_sec _runtime_csec _connection_status _recording_status ))

(defmethod h3_msgs::State
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:name __name) "")
    ((:status __status) 0)
    ((:joint_name __joint_name) (let (r) (dotimes (i 0) (push "" r)) r))
    ((:joint_control_type __joint_control_type) (make-array 0 :initial-element 0 :element-type :char))
    ((:joint_position __joint_position) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:joint_velocity __joint_velocity) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:joint_motor_torque __joint_motor_torque) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:joint_torque_sensor __joint_torque_sensor) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:battery_voltage __battery_voltage) 0.0)
    ((:right_heel_sensor __right_heel_sensor) 0)
    ((:right_toe_sensor __right_toe_sensor) 0)
    ((:left_heel_sensor __left_heel_sensor) 0)
    ((:left_toe_sensor __left_toe_sensor) 0)
    ((:trigger_input __trigger_input) 0)
    ((:command_app __command_app) 0)
    ((:trigger_counter __trigger_counter) 0)
    ((:runtime_min __runtime_min) 0)
    ((:runtime_sec __runtime_sec) 0)
    ((:runtime_csec __runtime_csec) 0)
    ((:connection_status __connection_status) 0)
    ((:recording_status __recording_status) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _name (string __name))
   (setq _status (round __status))
   (setq _joint_name __joint_name)
   (setq _joint_control_type __joint_control_type)
   (setq _joint_position __joint_position)
   (setq _joint_velocity __joint_velocity)
   (setq _joint_motor_torque __joint_motor_torque)
   (setq _joint_torque_sensor __joint_torque_sensor)
   (setq _battery_voltage (float __battery_voltage))
   (setq _right_heel_sensor (round __right_heel_sensor))
   (setq _right_toe_sensor (round __right_toe_sensor))
   (setq _left_heel_sensor (round __left_heel_sensor))
   (setq _left_toe_sensor (round __left_toe_sensor))
   (setq _trigger_input (round __trigger_input))
   (setq _command_app (round __command_app))
   (setq _trigger_counter (round __trigger_counter))
   (setq _runtime_min (round __runtime_min))
   (setq _runtime_sec (round __runtime_sec))
   (setq _runtime_csec (round __runtime_csec))
   (setq _connection_status (round __connection_status))
   (setq _recording_status (round __recording_status))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:status
   (&optional __status)
   (if __status (setq _status __status)) _status)
  (:joint_name
   (&optional __joint_name)
   (if __joint_name (setq _joint_name __joint_name)) _joint_name)
  (:joint_control_type
   (&optional __joint_control_type)
   (if __joint_control_type (setq _joint_control_type __joint_control_type)) _joint_control_type)
  (:joint_position
   (&optional __joint_position)
   (if __joint_position (setq _joint_position __joint_position)) _joint_position)
  (:joint_velocity
   (&optional __joint_velocity)
   (if __joint_velocity (setq _joint_velocity __joint_velocity)) _joint_velocity)
  (:joint_motor_torque
   (&optional __joint_motor_torque)
   (if __joint_motor_torque (setq _joint_motor_torque __joint_motor_torque)) _joint_motor_torque)
  (:joint_torque_sensor
   (&optional __joint_torque_sensor)
   (if __joint_torque_sensor (setq _joint_torque_sensor __joint_torque_sensor)) _joint_torque_sensor)
  (:battery_voltage
   (&optional __battery_voltage)
   (if __battery_voltage (setq _battery_voltage __battery_voltage)) _battery_voltage)
  (:right_heel_sensor
   (&optional __right_heel_sensor)
   (if __right_heel_sensor (setq _right_heel_sensor __right_heel_sensor)) _right_heel_sensor)
  (:right_toe_sensor
   (&optional __right_toe_sensor)
   (if __right_toe_sensor (setq _right_toe_sensor __right_toe_sensor)) _right_toe_sensor)
  (:left_heel_sensor
   (&optional __left_heel_sensor)
   (if __left_heel_sensor (setq _left_heel_sensor __left_heel_sensor)) _left_heel_sensor)
  (:left_toe_sensor
   (&optional __left_toe_sensor)
   (if __left_toe_sensor (setq _left_toe_sensor __left_toe_sensor)) _left_toe_sensor)
  (:trigger_input
   (&optional __trigger_input)
   (if __trigger_input (setq _trigger_input __trigger_input)) _trigger_input)
  (:command_app
   (&optional __command_app)
   (if __command_app (setq _command_app __command_app)) _command_app)
  (:trigger_counter
   (&optional __trigger_counter)
   (if __trigger_counter (setq _trigger_counter __trigger_counter)) _trigger_counter)
  (:runtime_min
   (&optional __runtime_min)
   (if __runtime_min (setq _runtime_min __runtime_min)) _runtime_min)
  (:runtime_sec
   (&optional __runtime_sec)
   (if __runtime_sec (setq _runtime_sec __runtime_sec)) _runtime_sec)
  (:runtime_csec
   (&optional __runtime_csec)
   (if __runtime_csec (setq _runtime_csec __runtime_csec)) _runtime_csec)
  (:connection_status
   (&optional __connection_status)
   (if __connection_status (setq _connection_status __connection_status)) _connection_status)
  (:recording_status
   (&optional __recording_status)
   (if __recording_status (setq _recording_status __recording_status)) _recording_status)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _name
    4 (length _name)
    ;; uint8 _status
    1
    ;; string[] _joint_name
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _joint_name)) 4
    ;; uint8[] _joint_control_type
    (* 1    (length _joint_control_type)) 4
    ;; float64[] _joint_position
    (* 8    (length _joint_position)) 4
    ;; float64[] _joint_velocity
    (* 8    (length _joint_velocity)) 4
    ;; float64[] _joint_motor_torque
    (* 8    (length _joint_motor_torque)) 4
    ;; float64[] _joint_torque_sensor
    (* 8    (length _joint_torque_sensor)) 4
    ;; float64 _battery_voltage
    8
    ;; uint8 _right_heel_sensor
    1
    ;; uint8 _right_toe_sensor
    1
    ;; uint8 _left_heel_sensor
    1
    ;; uint8 _left_toe_sensor
    1
    ;; uint8 _trigger_input
    1
    ;; uint8 _command_app
    1
    ;; uint8 _trigger_counter
    1
    ;; uint8 _runtime_min
    1
    ;; uint8 _runtime_sec
    1
    ;; uint8 _runtime_csec
    1
    ;; uint8 _connection_status
    1
    ;; uint8 _recording_status
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; uint8 _status
       (write-byte _status s)
     ;; string[] _joint_name
     (write-long (length _joint_name) s)
     (dolist (elem _joint_name)
       (write-long (length elem) s) (princ elem s)
       )
     ;; uint8[] _joint_control_type
     (write-long (length _joint_control_type) s)
     (princ _joint_control_type s)
     ;; float64[] _joint_position
     (write-long (length _joint_position) s)
     (dotimes (i (length _joint_position))
       (sys::poke (elt _joint_position i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _joint_velocity
     (write-long (length _joint_velocity) s)
     (dotimes (i (length _joint_velocity))
       (sys::poke (elt _joint_velocity i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _joint_motor_torque
     (write-long (length _joint_motor_torque) s)
     (dotimes (i (length _joint_motor_torque))
       (sys::poke (elt _joint_motor_torque i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _joint_torque_sensor
     (write-long (length _joint_torque_sensor) s)
     (dotimes (i (length _joint_torque_sensor))
       (sys::poke (elt _joint_torque_sensor i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64 _battery_voltage
       (sys::poke _battery_voltage (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; uint8 _right_heel_sensor
       (write-byte _right_heel_sensor s)
     ;; uint8 _right_toe_sensor
       (write-byte _right_toe_sensor s)
     ;; uint8 _left_heel_sensor
       (write-byte _left_heel_sensor s)
     ;; uint8 _left_toe_sensor
       (write-byte _left_toe_sensor s)
     ;; uint8 _trigger_input
       (write-byte _trigger_input s)
     ;; uint8 _command_app
       (write-byte _command_app s)
     ;; uint8 _trigger_counter
       (write-byte _trigger_counter s)
     ;; uint8 _runtime_min
       (write-byte _runtime_min s)
     ;; uint8 _runtime_sec
       (write-byte _runtime_sec s)
     ;; uint8 _runtime_csec
       (write-byte _runtime_csec s)
     ;; uint8 _connection_status
       (write-byte _connection_status s)
     ;; uint8 _recording_status
       (write-byte _recording_status s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _status
     (setq _status (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; string[] _joint_name
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _joint_name (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _joint_name i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;; uint8[] _joint_control_type
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _joint_control_type (make-array n :element-type :char))
     (replace _joint_control_type buf :start2 ptr-) (incf ptr- n))
   ;; float64[] _joint_position
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _joint_position (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _joint_position i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _joint_velocity
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _joint_velocity (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _joint_velocity i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _joint_motor_torque
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _joint_motor_torque (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _joint_motor_torque i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _joint_torque_sensor
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _joint_torque_sensor (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _joint_torque_sensor i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64 _battery_voltage
     (setq _battery_voltage (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; uint8 _right_heel_sensor
     (setq _right_heel_sensor (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _right_toe_sensor
     (setq _right_toe_sensor (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _left_heel_sensor
     (setq _left_heel_sensor (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _left_toe_sensor
     (setq _left_toe_sensor (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _trigger_input
     (setq _trigger_input (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _command_app
     (setq _command_app (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _trigger_counter
     (setq _trigger_counter (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _runtime_min
     (setq _runtime_min (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _runtime_sec
     (setq _runtime_sec (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _runtime_csec
     (setq _runtime_csec (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _connection_status
     (setq _connection_status (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _recording_status
     (setq _recording_status (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get h3_msgs::State :md5sum-) "1754db925199a3bf71f290a49b40b780")
(setf (get h3_msgs::State :datatype-) "h3_msgs/State")
(setf (get h3_msgs::State :definition-)
      "# name: The robot name defined in hardware configuration file.
# joint_control_type: 
# 0: No control selected - Motor disabled.
# 1: Position controller Selected.
# 2: Stiffness controller selected.
# 3: Torque controller selected.
# 4: Motor disabled.
# 5: Motor stopped.
# 6: Open loop enable.
# 7: Task controller enable, control_type for all joints should be set to 7.
# status: Useful when control_type selected is task controller enable.
# 0: Standing up.
# 1-10: Walking speed from 1 to 10.
# 11: Joints in passive mode (motors disabled).
# 12: Joints in compliant mode (zero torque mode).
# 13: Stopping walk.
# 14: Performing stand up.
# 15: Performing sit down.
# 16: Seated down.
# 17: Performing left step.
# 18: Performing right step.
# 19: All joints blocked.
# 21: Right hip failure.
# 22: Right knee failure.
# 23: Right hip failure.
# 24: Right hip failure.
# 25: Right hip failure.
# 26: Right hip failure.
# Command_app:
# 0: The Main Controller wiil process the command received from ROS hardware interface.
# 1: The Main Controller will process the command received from Bluetooth interface.
# runtime: Main Controller internal clock.
# connection_status:
# 0: Main controller not connected.
# 1: Main controller connected.
# recording_status:
# 0: No data is being recorded.
# 1: Recording data.
# 2: Waiting for an input trigger to start data recording.
# 3: Waiting for an output trigger to start data recording.
std_msgs/Header header
string name 
uint8 status
string[] joint_name
uint8[] joint_control_type
float64[] joint_position
float64[] joint_velocity
float64[] joint_motor_torque
float64[] joint_torque_sensor
float64 battery_voltage
uint8 right_heel_sensor
uint8 right_toe_sensor
uint8 left_heel_sensor
uint8 left_toe_sensor
uint8 trigger_input
uint8 command_app
uint8 trigger_counter
uint8 runtime_min
uint8 runtime_sec
uint8 runtime_csec
uint8 connection_status
uint8 recording_status



================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

")



(provide :h3_msgs/State "1754db925199a3bf71f290a49b40b780")


