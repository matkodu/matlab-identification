function ros2msg = auv_msgs_msg_BodyForceRequest_1To2_Converter(message,ros2msg)
%auv_msgs_msg_BodyForceRequest_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.wrench.force.x = message.Wrench.Force.X;
ros2msg.wrench.force.y = message.Wrench.Force.Y;
ros2msg.wrench.force.z = message.Wrench.Force.Z;
ros2msg.wrench.torque.x = message.Wrench.Torque.X;
ros2msg.wrench.torque.y = message.Wrench.Torque.Y;
ros2msg.wrench.torque.z = message.Wrench.Torque.Z;
ros2msg.disable_axis = message.DisableAxis;
end