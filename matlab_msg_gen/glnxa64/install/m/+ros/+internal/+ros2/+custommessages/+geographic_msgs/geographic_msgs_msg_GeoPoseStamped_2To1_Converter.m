function ros1msg = geographic_msgs_msg_GeoPoseStamped_2To1_Converter(message,ros1msg)
%geographic_msgs_msg_GeoPoseStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Pose.Position.Latitude = message.pose.position.latitude;
ros1msg.Pose.Position.Longitude = message.pose.position.longitude;
ros1msg.Pose.Position.Altitude = message.pose.position.altitude;
ros1msg.Pose.Orientation.X = message.pose.orientation.x;
ros1msg.Pose.Orientation.Y = message.pose.orientation.y;
ros1msg.Pose.Orientation.Z = message.pose.orientation.z;
ros1msg.Pose.Orientation.W = message.pose.orientation.w;
end