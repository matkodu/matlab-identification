function ros2msg = labust_msgs_msg_ManualConfiguration_1To2_Converter(message,ros2msg)
%labust_msgs_msg_ManualConfiguration_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.sampling_time = message.SamplingTime;
ros2msg.use_ff = message.UseFf;
ros2msg.topic = message.Topic;
end