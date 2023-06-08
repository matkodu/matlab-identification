function ros2msg = auv_msgs_msg_BodyVelocityRequest_1To2_Converter(message,ros2msg)
%auv_msgs_msg_BodyVelocityRequest_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.twist.linear.x = message.Twist.Linear.X;
ros2msg.twist.linear.y = message.Twist.Linear.Y;
ros2msg.twist.linear.z = message.Twist.Linear.Z;
ros2msg.twist.angular.x = message.Twist.Angular.X;
ros2msg.twist.angular.y = message.Twist.Angular.Y;
ros2msg.twist.angular.z = message.Twist.Angular.Z;
ros2msg.disable_axis = message.DisableAxis;
end