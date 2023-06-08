function ros1msg = geographic_msgs_msg_GeoPointStamped_2To1_Converter(message,ros1msg)
%geographic_msgs_msg_GeoPointStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Position.Latitude = message.position.latitude;
ros1msg.Position.Longitude = message.position.longitude;
ros1msg.Position.Altitude = message.position.altitude;
end