function ros1msg = auv_msgs_msg_BodyVelocityRequest_2To1_Converter(message,ros1msg)
%auv_msgs_msg_BodyVelocityRequest_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Twist.Linear.X = message.twist.linear.x;
ros1msg.Twist.Linear.Y = message.twist.linear.y;
ros1msg.Twist.Linear.Z = message.twist.linear.z;
ros1msg.Twist.Angular.X = message.twist.angular.x;
ros1msg.Twist.Angular.Y = message.twist.angular.y;
ros1msg.Twist.Angular.Z = message.twist.angular.z;
ros1msg.DisableAxis = message.disable_axis;
end