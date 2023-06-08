function ros2msg = geographic_msgs_msg_GeoPointStamped_1To2_Converter(message,ros2msg)
%geographic_msgs_msg_GeoPointStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.position.latitude = message.Position.Latitude;
ros2msg.position.longitude = message.Position.Longitude;
ros2msg.position.altitude = message.Position.Altitude;
end