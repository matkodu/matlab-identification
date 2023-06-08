function ros1msg = labust_msgs_msg_NanomodemPayload_2To1_Converter(message,ros1msg)
%labust_msgs_msg_NanomodemPayload_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.SenderId = message.sender_id;
ros1msg.MsgType = message.msg_type;
end