function ros1msg = labust_msgs_msg_BodyVelocityReq_2To1_Converter(message,ros1msg)
%labust_msgs_msg_BodyVelocityReq_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Goal.Requester = message.goal.requester{1};
ros1msg.Goal.Id = message.goal.id;
ros1msg.Goal.Priority = message.goal.priority;
ros1msg.Twist.Linear.X = message.twist.linear.x;
ros1msg.Twist.Linear.Y = message.twist.linear.y;
ros1msg.Twist.Linear.Z = message.twist.linear.z;
ros1msg.Twist.Angular.X = message.twist.angular.x;
ros1msg.Twist.Angular.Y = message.twist.angular.y;
ros1msg.Twist.Angular.Z = message.twist.angular.z;
ros1msg.DisableAxis.X = message.disable_axis.x;
ros1msg.DisableAxis.Y = message.disable_axis.y;
ros1msg.DisableAxis.Z = message.disable_axis.z;
ros1msg.DisableAxis.Roll = message.disable_axis.roll;
ros1msg.DisableAxis.Pitch = message.disable_axis.pitch;
ros1msg.DisableAxis.Yaw = message.disable_axis.yaw;
end