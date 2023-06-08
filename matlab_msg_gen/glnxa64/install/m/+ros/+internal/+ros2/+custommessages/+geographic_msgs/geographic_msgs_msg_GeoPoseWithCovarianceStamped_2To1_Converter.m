function ros1msg = geographic_msgs_msg_GeoPoseWithCovarianceStamped_2To1_Converter(message,ros1msg)
%geographic_msgs_msg_GeoPoseWithCovarianceStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Pose.Pose.Position.Latitude = message.pose.pose.position.latitude;
ros1msg.Pose.Pose.Position.Longitude = message.pose.pose.position.longitude;
ros1msg.Pose.Pose.Position.Altitude = message.pose.pose.position.altitude;
ros1msg.Pose.Pose.Orientation.X = message.pose.pose.orientation.x;
ros1msg.Pose.Pose.Orientation.Y = message.pose.pose.orientation.y;
ros1msg.Pose.Pose.Orientation.Z = message.pose.pose.orientation.z;
ros1msg.Pose.Pose.Orientation.W = message.pose.pose.orientation.w;
ros1msg.Pose.Covariance = message.pose.covariance;
end