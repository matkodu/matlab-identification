function ros1msg = labust_msgs_msg_TauReference_2To1_Converter(message,ros1msg)
%labust_msgs_msg_TauReference_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.IdentityToken = message.identity_token{1};
ros1msg.Reference.Force.X = message.reference.force.x;
ros1msg.Reference.Force.Y = message.reference.force.y;
ros1msg.Reference.Force.Z = message.reference.force.z;
ros1msg.Reference.Torque.X = message.reference.torque.x;
ros1msg.Reference.Torque.Y = message.reference.torque.y;
ros1msg.Reference.Torque.Z = message.reference.torque.z;
end