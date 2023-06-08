function ros1msg = labust_msgs_msg_BodyForceReq_2To1_Converter(message,ros1msg)
%labust_msgs_msg_BodyForceReq_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Goal.Requester = message.goal.requester{1};
ros1msg.Goal.Id = message.goal.id;
ros1msg.Goal.Priority = message.goal.priority;
ros1msg.Wrench.Force.X = message.wrench.force.x;
ros1msg.Wrench.Force.Y = message.wrench.force.y;
ros1msg.Wrench.Force.Z = message.wrench.force.z;
ros1msg.Wrench.Torque.X = message.wrench.torque.x;
ros1msg.Wrench.Torque.Y = message.wrench.torque.y;
ros1msg.Wrench.Torque.Z = message.wrench.torque.z;
ros1msg.DisableAxis.X = message.disable_axis.x;
ros1msg.DisableAxis.Y = message.disable_axis.y;
ros1msg.DisableAxis.Z = message.disable_axis.z;
ros1msg.DisableAxis.Roll = message.disable_axis.roll;
ros1msg.DisableAxis.Pitch = message.disable_axis.pitch;
ros1msg.DisableAxis.Yaw = message.disable_axis.yaw;
ros1msg.Windup.X = message.windup.x;
ros1msg.Windup.Y = message.windup.y;
ros1msg.Windup.Z = message.windup.z;
ros1msg.Windup.Roll = message.windup.roll;
ros1msg.Windup.Pitch = message.windup.pitch;
ros1msg.Windup.Yaw = message.windup.yaw;
end