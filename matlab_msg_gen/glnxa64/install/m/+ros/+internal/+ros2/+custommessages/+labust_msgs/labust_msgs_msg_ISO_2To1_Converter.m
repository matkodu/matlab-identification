function ros1msg = labust_msgs_msg_ISO_2To1_Converter(message,ros1msg)
%labust_msgs_msg_ISO_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Dof = message.dof;
ros1msg.Command = message.command;
ros1msg.Hysteresis = message.hysteresis;
ros1msg.Reference = message.reference;
ros1msg.SamplingRate = message.sampling_rate;
end