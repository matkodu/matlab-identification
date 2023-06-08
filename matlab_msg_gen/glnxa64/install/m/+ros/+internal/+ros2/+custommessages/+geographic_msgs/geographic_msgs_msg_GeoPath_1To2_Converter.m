function ros2msg = geographic_msgs_msg_GeoPath_1To2_Converter(message,ros2msg)
%geographic_msgs_msg_GeoPath_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.poses.header.stamp.sec = message.Poses.Header.Stamp.Sec;
ros2msg.poses.header.stamp.nanosec = message.Poses.Header.Stamp.Nsec;
ros2msg.poses.header.frame_id = message.Poses.Header.FrameId;
ros2msg.poses.pose.position.latitude = message.Poses.Pose.Position.Latitude;
ros2msg.poses.pose.position.longitude = message.Poses.Pose.Position.Longitude;
ros2msg.poses.pose.position.altitude = message.Poses.Pose.Position.Altitude;
ros2msg.poses.pose.orientation.x = message.Poses.Pose.Orientation.X;
ros2msg.poses.pose.orientation.y = message.Poses.Pose.Orientation.Y;
ros2msg.poses.pose.orientation.z = message.Poses.Pose.Orientation.Z;
ros2msg.poses.pose.orientation.w = message.Poses.Pose.Orientation.W;
end