function ros1msg = labust_msgs_msg_HLMessage_2To1_Converter(message,ros1msg)
%labust_msgs_msg_HLMessage_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Mode = message.mode;
ros1msg.RefPoint.Header.Stamp.Sec = message.ref_point.header.stamp.sec;
ros1msg.RefPoint.Header.Stamp.Nsec = message.ref_point.header.stamp.nanosec;
ros1msg.RefPoint.Header.FrameId = message.ref_point.header.frame_id{1};
ros1msg.RefPoint.Point.X = message.ref_point.point.x;
ros1msg.RefPoint.Point.Y = message.ref_point.point.y;
ros1msg.RefPoint.Point.Z = message.ref_point.point.z;
ros1msg.Radius = message.radius;
ros1msg.Surge = message.surge;
ros1msg.Yaw = message.yaw;
end