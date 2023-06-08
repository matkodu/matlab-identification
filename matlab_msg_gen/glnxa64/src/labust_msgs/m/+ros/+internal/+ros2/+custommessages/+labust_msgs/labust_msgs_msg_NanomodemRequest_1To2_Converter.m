function ros2msg = labust_msgs_msg_NanomodemRequest_1To2_Converter(message,ros2msg)
%labust_msgs_msg_NanomodemRequest_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.req_type = message.ReqType;
ros2msg.scheduled = message.Scheduled;
ros2msg.id = message.Id;
end