function ros1msg = geographic_msgs_msg_GeoPoint_2To1_Converter(message,ros1msg)
%geographic_msgs_msg_GeoPoint_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Latitude = message.latitude;
ros1msg.Longitude = message.longitude;
ros1msg.Altitude = message.altitude;
end