function ros1msg = auv_msgs_msg_BodyForceRequest_2To1_Converter(message,ros1msg)
%auv_msgs_msg_BodyForceRequest_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Wrench.Force.X = message.wrench.force.x;
ros1msg.Wrench.Force.Y = message.wrench.force.y;
ros1msg.Wrench.Force.Z = message.wrench.force.z;
ros1msg.Wrench.Torque.X = message.wrench.torque.x;
ros1msg.Wrench.Torque.Y = message.wrench.torque.y;
ros1msg.Wrench.Torque.Z = message.wrench.torque.z;
ros1msg.DisableAxis = message.disable_axis;
end