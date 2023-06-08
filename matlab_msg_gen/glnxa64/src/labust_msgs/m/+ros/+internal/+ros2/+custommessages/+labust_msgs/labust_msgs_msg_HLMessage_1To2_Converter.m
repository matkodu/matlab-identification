function ros2msg = labust_msgs_msg_HLMessage_1To2_Converter(message,ros2msg)
%labust_msgs_msg_HLMessage_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.mode = message.Mode;
ros2msg.ref_point.header.stamp.sec = message.RefPoint.Header.Stamp.Sec;
ros2msg.ref_point.header.stamp.nanosec = message.RefPoint.Header.Stamp.Nsec;
ros2msg.ref_point.header.frame_id = message.RefPoint.Header.FrameId;
ros2msg.ref_point.point.x = message.RefPoint.Point.X;
ros2msg.ref_point.point.y = message.RefPoint.Point.Y;
ros2msg.ref_point.point.z = message.RefPoint.Point.Z;
ros2msg.radius = message.Radius;
ros2msg.surge = message.Surge;
ros2msg.yaw = message.Yaw;
end