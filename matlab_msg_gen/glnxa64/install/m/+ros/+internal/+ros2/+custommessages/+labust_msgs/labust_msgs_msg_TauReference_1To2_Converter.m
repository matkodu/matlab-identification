function ros2msg = labust_msgs_msg_TauReference_1To2_Converter(message,ros2msg)
%labust_msgs_msg_TauReference_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.identity_token = message.IdentityToken;
ros2msg.reference.force.x = message.Reference.Force.X;
ros2msg.reference.force.y = message.Reference.Force.Y;
ros2msg.reference.force.z = message.Reference.Force.Z;
ros2msg.reference.torque.x = message.Reference.Torque.X;
ros2msg.reference.torque.y = message.Reference.Torque.Y;
ros2msg.reference.torque.z = message.Reference.Torque.Z;
end