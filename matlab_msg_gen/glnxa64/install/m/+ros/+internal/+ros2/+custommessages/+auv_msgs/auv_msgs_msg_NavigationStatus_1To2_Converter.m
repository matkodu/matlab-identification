function ros2msg = auv_msgs_msg_NavigationStatus_1To2_Converter(message,ros2msg)
%auv_msgs_msg_NavigationStatus_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.global_position.latitude = message.GlobalPosition.Latitude;
ros2msg.global_position.longitude = message.GlobalPosition.Longitude;
ros2msg.global_position.altitude = message.GlobalPosition.Altitude;
ros2msg.origin.latitude = message.Origin.Latitude;
ros2msg.origin.longitude = message.Origin.Longitude;
ros2msg.origin.altitude = message.Origin.Altitude;
ros2msg.position.north = message.Position.North;
ros2msg.position.east = message.Position.East;
ros2msg.position.depth = message.Position.Depth;
ros2msg.altitude = message.Altitude;
ros2msg.body_velocity.x = message.BodyVelocity.X;
ros2msg.body_velocity.y = message.BodyVelocity.Y;
ros2msg.body_velocity.z = message.BodyVelocity.Z;
ros2msg.seafloor_velocity.x = message.SeafloorVelocity.X;
ros2msg.seafloor_velocity.y = message.SeafloorVelocity.Y;
ros2msg.seafloor_velocity.z = message.SeafloorVelocity.Z;
ros2msg.orientation.x = message.Orientation.X;
ros2msg.orientation.y = message.Orientation.Y;
ros2msg.orientation.z = message.Orientation.Z;
ros2msg.orientation_rate.x = message.OrientationRate.X;
ros2msg.orientation_rate.y = message.OrientationRate.Y;
ros2msg.orientation_rate.z = message.OrientationRate.Z;
ros2msg.position_variance.north = message.PositionVariance.North;
ros2msg.position_variance.east = message.PositionVariance.East;
ros2msg.position_variance.depth = message.PositionVariance.Depth;
ros2msg.orientation_variance.x = message.OrientationVariance.X;
ros2msg.orientation_variance.y = message.OrientationVariance.Y;
ros2msg.orientation_variance.z = message.OrientationVariance.Z;
ros2msg.status = message.Status;
end