function ros2msg = geographic_msgs_msg_BoundingBox_1To2_Converter(message,ros2msg)
%geographic_msgs_msg_BoundingBox_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.min_pt.latitude = message.MinPt.Latitude;
ros2msg.min_pt.longitude = message.MinPt.Longitude;
ros2msg.min_pt.altitude = message.MinPt.Altitude;
ros2msg.max_pt.latitude = message.MaxPt.Latitude;
ros2msg.max_pt.longitude = message.MaxPt.Longitude;
ros2msg.max_pt.altitude = message.MaxPt.Altitude;
end