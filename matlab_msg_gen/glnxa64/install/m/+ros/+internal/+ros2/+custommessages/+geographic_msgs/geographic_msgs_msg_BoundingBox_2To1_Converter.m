function ros1msg = geographic_msgs_msg_BoundingBox_2To1_Converter(message,ros1msg)
%geographic_msgs_msg_BoundingBox_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.MinPt.Latitude = message.min_pt.latitude;
ros1msg.MinPt.Longitude = message.min_pt.longitude;
ros1msg.MinPt.Altitude = message.min_pt.altitude;
ros1msg.MaxPt.Latitude = message.max_pt.latitude;
ros1msg.MaxPt.Longitude = message.max_pt.longitude;
ros1msg.MaxPt.Altitude = message.max_pt.altitude;
end