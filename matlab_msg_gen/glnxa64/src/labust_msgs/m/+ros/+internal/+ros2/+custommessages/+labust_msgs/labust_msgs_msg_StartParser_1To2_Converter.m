function ros2msg = labust_msgs_msg_StartParser_1To2_Converter(message,ros2msg)
%labust_msgs_msg_StartParser_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.method = message.Method;
ros2msg.mission_data = message.MissionData;
ros2msg.relative = message.Relative;
ros2msg.start_position.north = message.StartPosition.North;
ros2msg.start_position.east = message.StartPosition.East;
ros2msg.start_position.depth = message.StartPosition.Depth;
end