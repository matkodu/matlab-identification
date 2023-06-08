function ros1msg = geographic_msgs_msg_GeoPath_2To1_Converter(message,ros1msg)
%geographic_msgs_msg_GeoPath_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Poses.Header.Stamp.Sec = message.poses.header.stamp.sec;
ros1msg.Poses.Header.Stamp.Nsec = message.poses.header.stamp.nanosec;
ros1msg.Poses.Header.FrameId = message.poses.header.frame_id{1};
ros1msg.Poses.Pose.Position.Latitude = message.poses.pose.position.latitude;
ros1msg.Poses.Pose.Position.Longitude = message.poses.pose.position.longitude;
ros1msg.Poses.Pose.Position.Altitude = message.poses.pose.position.altitude;
ros1msg.Poses.Pose.Orientation.X = message.poses.pose.orientation.x;
ros1msg.Poses.Pose.Orientation.Y = message.poses.pose.orientation.y;
ros1msg.Poses.Pose.Orientation.Z = message.poses.pose.orientation.z;
ros1msg.Poses.Pose.Orientation.W = message.poses.pose.orientation.w;
end