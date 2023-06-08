function ros2msg = labust_msgs_msg_BodyForceReq_1To2_Converter(message,ros2msg)
%labust_msgs_msg_BodyForceReq_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.goal.requester = message.Goal.Requester;
ros2msg.goal.id = message.Goal.Id;
ros2msg.goal.priority = message.Goal.Priority;
ros2msg.wrench.force.x = message.Wrench.Force.X;
ros2msg.wrench.force.y = message.Wrench.Force.Y;
ros2msg.wrench.force.z = message.Wrench.Force.Z;
ros2msg.wrench.torque.x = message.Wrench.Torque.X;
ros2msg.wrench.torque.y = message.Wrench.Torque.Y;
ros2msg.wrench.torque.z = message.Wrench.Torque.Z;
ros2msg.disable_axis.x = message.DisableAxis.X;
ros2msg.disable_axis.y = message.DisableAxis.Y;
ros2msg.disable_axis.z = message.DisableAxis.Z;
ros2msg.disable_axis.roll = message.DisableAxis.Roll;
ros2msg.disable_axis.pitch = message.DisableAxis.Pitch;
ros2msg.disable_axis.yaw = message.DisableAxis.Yaw;
ros2msg.windup.x = message.Windup.X;
ros2msg.windup.y = message.Windup.Y;
ros2msg.windup.z = message.Windup.Z;
ros2msg.windup.roll = message.Windup.Roll;
ros2msg.windup.pitch = message.Windup.Pitch;
ros2msg.windup.yaw = message.Windup.Yaw;
end