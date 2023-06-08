function ros1msg = labust_msgs_msg_ManualConfiguration_2To1_Converter(message,ros1msg)
%labust_msgs_msg_ManualConfiguration_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.SamplingTime = message.sampling_time;
ros1msg.UseFf = message.use_ff;
ros1msg.Topic = message.topic{1};
end