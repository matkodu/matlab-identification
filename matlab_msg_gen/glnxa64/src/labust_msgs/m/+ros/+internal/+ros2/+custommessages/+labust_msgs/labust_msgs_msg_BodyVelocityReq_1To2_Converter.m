function ros2msg = labust_msgs_msg_BodyVelocityReq_1To2_Converter(message,ros2msg)
%labust_msgs_msg_BodyVelocityReq_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.goal.requester = message.Goal.Requester;
ros2msg.goal.id = message.Goal.Id;
ros2msg.goal.priority = message.Goal.Priority;
ros2msg.twist.linear.x = message.Twist.Linear.X;
ros2msg.twist.linear.y = message.Twist.Linear.Y;
ros2msg.twist.linear.z = message.Twist.Linear.Z;
ros2msg.twist.angular.x = message.Twist.Angular.X;
ros2msg.twist.angular.y = message.Twist.Angular.Y;
ros2msg.twist.angular.z = message.Twist.Angular.Z;
ros2msg.disable_axis.x = message.DisableAxis.X;
ros2msg.disable_axis.y = message.DisableAxis.Y;
ros2msg.disable_axis.z = message.DisableAxis.Z;
ros2msg.disable_axis.roll = message.DisableAxis.Roll;
ros2msg.disable_axis.pitch = message.DisableAxis.Pitch;
ros2msg.disable_axis.yaw = message.DisableAxis.Yaw;
end