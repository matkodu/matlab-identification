function ros2msg = auv_msgs_msg_WorldWaypointRequest_1To2_Converter(message,ros2msg)
%auv_msgs_msg_WorldWaypointRequest_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.position.north = message.Position.North;
ros2msg.position.east = message.Position.East;
ros2msg.position.depth = message.Position.Depth;
ros2msg.orientation.x = message.Orientation.X;
ros2msg.orientation.y = message.Orientation.Y;
ros2msg.orientation.z = message.Orientation.Z;
ros2msg.disable_axis = message.DisableAxis;
ros2msg.position_tolerance.x = message.PositionTolerance.X;
ros2msg.position_tolerance.y = message.PositionTolerance.Y;
ros2msg.position_tolerance.z = message.PositionTolerance.Z;
ros2msg.orientation_tolerance.x = message.OrientationTolerance.X;
ros2msg.orientation_tolerance.y = message.OrientationTolerance.Y;
ros2msg.orientation_tolerance.z = message.OrientationTolerance.Z;
ros2msg.twist_limit.linear.x = message.TwistLimit.Linear.X;
ros2msg.twist_limit.linear.y = message.TwistLimit.Linear.Y;
ros2msg.twist_limit.linear.z = message.TwistLimit.Linear.Z;
ros2msg.twist_limit.angular.x = message.TwistLimit.Angular.X;
ros2msg.twist_limit.angular.y = message.TwistLimit.Angular.Y;
ros2msg.twist_limit.angular.z = message.TwistLimit.Angular.Z;
end