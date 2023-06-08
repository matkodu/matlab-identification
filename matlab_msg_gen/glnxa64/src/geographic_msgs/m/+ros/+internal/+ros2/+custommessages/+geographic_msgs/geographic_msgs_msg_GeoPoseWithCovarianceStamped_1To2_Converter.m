function ros2msg = geographic_msgs_msg_GeoPoseWithCovarianceStamped_1To2_Converter(message,ros2msg)
%geographic_msgs_msg_GeoPoseWithCovarianceStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.pose.pose.position.latitude = message.Pose.Pose.Position.Latitude;
ros2msg.pose.pose.position.longitude = message.Pose.Pose.Position.Longitude;
ros2msg.pose.pose.position.altitude = message.Pose.Pose.Position.Altitude;
ros2msg.pose.pose.orientation.x = message.Pose.Pose.Orientation.X;
ros2msg.pose.pose.orientation.y = message.Pose.Pose.Orientation.Y;
ros2msg.pose.pose.orientation.z = message.Pose.Pose.Orientation.Z;
ros2msg.pose.pose.orientation.w = message.Pose.Pose.Orientation.W;
ros2msg.pose.covariance = message.Pose.Covariance;
end