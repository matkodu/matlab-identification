function ros1msg = labust_msgs_msg_Go2PointUA_2To1_Converter(message,ros1msg)
%labust_msgs_msg_Go2PointUA_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Point.North = message.point.north;
ros1msg.Point.East = message.point.east;
ros1msg.Point.Depth = message.point.depth;
ros1msg.Speed = message.speed;
ros1msg.VictoryRadius = message.victory_radius;
end