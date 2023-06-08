function ros1msg = labust_msgs_msg_MissionSetup_2To1_Converter(message,ros1msg)
%labust_msgs_msg_MissionSetup_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.MissionParams = message.mission_params{1};
ros1msg.MissionEvents = message.mission_events{1};
ros1msg.MissionOffset.North = message.mission_offset.north;
ros1msg.MissionOffset.East = message.mission_offset.east;
ros1msg.MissionOffset.Depth = message.mission_offset.depth;
end