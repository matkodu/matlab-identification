function ros2msg = labust_msgs_msg_ISO_1To2_Converter(message,ros2msg)
%labust_msgs_msg_ISO_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.dof = message.Dof;
ros2msg.command = message.Command;
ros2msg.hysteresis = message.Hysteresis;
ros2msg.reference = message.Reference;
ros2msg.sampling_rate = message.SamplingRate;
end