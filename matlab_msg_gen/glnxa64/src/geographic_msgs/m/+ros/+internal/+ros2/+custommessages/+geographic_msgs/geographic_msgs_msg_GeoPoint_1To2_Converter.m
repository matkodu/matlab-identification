function ros2msg = geographic_msgs_msg_GeoPoint_1To2_Converter(message,ros2msg)
%geographic_msgs_msg_GeoPoint_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.latitude = message.Latitude;
ros2msg.longitude = message.Longitude;
ros2msg.altitude = message.Altitude;
end