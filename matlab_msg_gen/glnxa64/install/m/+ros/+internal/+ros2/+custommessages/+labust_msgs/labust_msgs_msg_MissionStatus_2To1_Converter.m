function ros1msg = labust_msgs_msg_MissionStatus_2To1_Converter(message,ros1msg)
%labust_msgs_msg_MissionStatus_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.MissionActive = message.mission_active;
ros1msg.ActivePrimitive = message.active_primitive{1};
ros1msg.MissionExecutionReady = message.mission_execution_ready;
ros1msg.ManualEnabled = message.manual_enabled;
end