function ros2msg = labust_msgs_msg_MissionSetup_1To2_Converter(message,ros2msg)
%labust_msgs_msg_MissionSetup_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.mission_params = message.MissionParams;
ros2msg.mission_events = message.MissionEvents;
ros2msg.mission_offset.north = message.MissionOffset.North;
ros2msg.mission_offset.east = message.MissionOffset.East;
ros2msg.mission_offset.depth = message.MissionOffset.Depth;
end