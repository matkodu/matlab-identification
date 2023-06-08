function ros2msg = auv_msgs_msg_NED_1To2_Converter(message,ros2msg)
%auv_msgs_msg_NED_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.north = message.North;
ros2msg.east = message.East;
ros2msg.depth = message.Depth;
end