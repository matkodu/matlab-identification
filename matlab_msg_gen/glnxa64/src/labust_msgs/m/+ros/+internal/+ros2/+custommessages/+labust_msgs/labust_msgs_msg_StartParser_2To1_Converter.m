function ros1msg = labust_msgs_msg_StartParser_2To1_Converter(message,ros1msg)
%labust_msgs_msg_StartParser_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Method = message.method;
ros1msg.MissionData = message.mission_data{1};
ros1msg.Relative = message.relative;
ros1msg.StartPosition.North = message.start_position.north;
ros1msg.StartPosition.East = message.start_position.east;
ros1msg.StartPosition.Depth = message.start_position.depth;
end