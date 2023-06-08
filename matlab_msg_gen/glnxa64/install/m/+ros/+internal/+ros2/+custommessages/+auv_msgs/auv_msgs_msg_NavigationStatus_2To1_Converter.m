function ros1msg = auv_msgs_msg_NavigationStatus_2To1_Converter(message,ros1msg)
%auv_msgs_msg_NavigationStatus_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.GlobalPosition.Latitude = message.global_position.latitude;
ros1msg.GlobalPosition.Longitude = message.global_position.longitude;
ros1msg.GlobalPosition.Altitude = message.global_position.altitude;
ros1msg.Origin.Latitude = message.origin.latitude;
ros1msg.Origin.Longitude = message.origin.longitude;
ros1msg.Origin.Altitude = message.origin.altitude;
ros1msg.Position.North = message.position.north;
ros1msg.Position.East = message.position.east;
ros1msg.Position.Depth = message.position.depth;
ros1msg.Altitude = message.altitude;
ros1msg.BodyVelocity.X = message.body_velocity.x;
ros1msg.BodyVelocity.Y = message.body_velocity.y;
ros1msg.BodyVelocity.Z = message.body_velocity.z;
ros1msg.SeafloorVelocity.X = message.seafloor_velocity.x;
ros1msg.SeafloorVelocity.Y = message.seafloor_velocity.y;
ros1msg.SeafloorVelocity.Z = message.seafloor_velocity.z;
ros1msg.Orientation.X = message.orientation.x;
ros1msg.Orientation.Y = message.orientation.y;
ros1msg.Orientation.Z = message.orientation.z;
ros1msg.OrientationRate.X = message.orientation_rate.x;
ros1msg.OrientationRate.Y = message.orientation_rate.y;
ros1msg.OrientationRate.Z = message.orientation_rate.z;
ros1msg.PositionVariance.North = message.position_variance.north;
ros1msg.PositionVariance.East = message.position_variance.east;
ros1msg.PositionVariance.Depth = message.position_variance.depth;
ros1msg.OrientationVariance.X = message.orientation_variance.x;
ros1msg.OrientationVariance.Y = message.orientation_variance.y;
ros1msg.OrientationVariance.Z = message.orientation_variance.z;
ros1msg.Status = message.status;
end