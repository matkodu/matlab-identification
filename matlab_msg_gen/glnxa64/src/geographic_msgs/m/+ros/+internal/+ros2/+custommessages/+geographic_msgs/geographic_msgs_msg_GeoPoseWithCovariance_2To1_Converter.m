function ros1msg = geographic_msgs_msg_GeoPoseWithCovariance_2To1_Converter(message,ros1msg)
%geographic_msgs_msg_GeoPoseWithCovariance_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Pose.Position.Latitude = message.pose.position.latitude;
ros1msg.Pose.Position.Longitude = message.pose.position.longitude;
ros1msg.Pose.Position.Altitude = message.pose.position.altitude;
ros1msg.Pose.Orientation.X = message.pose.orientation.x;
ros1msg.Pose.Orientation.Y = message.pose.orientation.y;
ros1msg.Pose.Orientation.Z = message.pose.orientation.z;
ros1msg.Pose.Orientation.W = message.pose.orientation.w;
ros1msg.Covariance = message.covariance;
end