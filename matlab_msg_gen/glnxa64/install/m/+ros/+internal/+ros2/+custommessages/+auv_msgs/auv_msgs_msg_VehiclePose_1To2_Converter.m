function ros2msg = auv_msgs_msg_VehiclePose_1To2_Converter(message,ros2msg)
%auv_msgs_msg_VehiclePose_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.id = message.Id;
ros2msg.position.north = message.Position.North;
ros2msg.position.east = message.Position.East;
ros2msg.position.depth = message.Position.Depth;
ros2msg.orientation.x = message.Orientation.X;
ros2msg.orientation.y = message.Orientation.Y;
ros2msg.orientation.z = message.Orientation.Z;
end