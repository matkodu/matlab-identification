function ros2msg = labust_msgs_msg_MissionStatus_1To2_Converter(message,ros2msg)
%labust_msgs_msg_MissionStatus_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.mission_active = message.MissionActive;
ros2msg.active_primitive = message.ActivePrimitive;
ros2msg.mission_execution_ready = message.MissionExecutionReady;
ros2msg.manual_enabled = message.ManualEnabled;
end