function ros1msg = auv_msgs_msg_WorldWaypointRequest_2To1_Converter(message,ros1msg)
%auv_msgs_msg_WorldWaypointRequest_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Position.North = message.position.north;
ros1msg.Position.East = message.position.east;
ros1msg.Position.Depth = message.position.depth;
ros1msg.Orientation.X = message.orientation.x;
ros1msg.Orientation.Y = message.orientation.y;
ros1msg.Orientation.Z = message.orientation.z;
ros1msg.DisableAxis = message.disable_axis;
ros1msg.PositionTolerance.X = message.position_tolerance.x;
ros1msg.PositionTolerance.Y = message.position_tolerance.y;
ros1msg.PositionTolerance.Z = message.position_tolerance.z;
ros1msg.OrientationTolerance.X = message.orientation_tolerance.x;
ros1msg.OrientationTolerance.Y = message.orientation_tolerance.y;
ros1msg.OrientationTolerance.Z = message.orientation_tolerance.z;
ros1msg.TwistLimit.Linear.X = message.twist_limit.linear.x;
ros1msg.TwistLimit.Linear.Y = message.twist_limit.linear.y;
ros1msg.TwistLimit.Linear.Z = message.twist_limit.linear.z;
ros1msg.TwistLimit.Angular.X = message.twist_limit.angular.x;
ros1msg.TwistLimit.Angular.Y = message.twist_limit.angular.y;
ros1msg.TwistLimit.Angular.Z = message.twist_limit.angular.z;
end