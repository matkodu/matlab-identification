function ros2msg = labust_msgs_msg_Go2PointUA_1To2_Converter(message,ros2msg)
%labust_msgs_msg_Go2PointUA_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.point.north = message.Point.North;
ros2msg.point.east = message.Point.East;
ros2msg.point.depth = message.Point.Depth;
ros2msg.speed = message.Speed;
ros2msg.victory_radius = message.VictoryRadius;
end