function ros2msg = geographic_msgs_msg_GeoPose_1To2_Converter(message,ros2msg)
%geographic_msgs_msg_GeoPose_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.position.latitude = message.Position.Latitude;
ros2msg.position.longitude = message.Position.Longitude;
ros2msg.position.altitude = message.Position.Altitude;
ros2msg.orientation.x = message.Orientation.X;
ros2msg.orientation.y = message.Orientation.Y;
ros2msg.orientation.z = message.Orientation.Z;
ros2msg.orientation.w = message.Orientation.W;
end