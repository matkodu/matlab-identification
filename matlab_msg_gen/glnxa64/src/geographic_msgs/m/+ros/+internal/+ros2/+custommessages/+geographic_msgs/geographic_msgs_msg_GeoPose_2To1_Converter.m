function ros1msg = geographic_msgs_msg_GeoPose_2To1_Converter(message,ros1msg)
%geographic_msgs_msg_GeoPose_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Position.Latitude = message.position.latitude;
ros1msg.Position.Longitude = message.position.longitude;
ros1msg.Position.Altitude = message.position.altitude;
ros1msg.Orientation.X = message.orientation.x;
ros1msg.Orientation.Y = message.orientation.y;
ros1msg.Orientation.Z = message.orientation.z;
ros1msg.Orientation.W = message.orientation.w;
end