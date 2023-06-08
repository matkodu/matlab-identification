function ros2msg = geographic_msgs_msg_GeoPoseStamped_1To2_Converter(message,ros2msg)
%geographic_msgs_msg_GeoPoseStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.pose.position.latitude = message.Pose.Position.Latitude;
ros2msg.pose.position.longitude = message.Pose.Position.Longitude;
ros2msg.pose.position.altitude = message.Pose.Position.Altitude;
ros2msg.pose.orientation.x = message.Pose.Orientation.X;
ros2msg.pose.orientation.y = message.Pose.Orientation.Y;
ros2msg.pose.orientation.z = message.Pose.Orientation.Z;
ros2msg.pose.orientation.w = message.Pose.Orientation.W;
end