function ros1msg = labust_msgs_msg_RegisterController_2To1_Converter(message,ros1msg)
%labust_msgs_msg_RegisterController_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Parent = message.parent{1};
ros1msg.Name = message.name{1};
ros1msg.UsedTau = message.used_tau;
ros1msg.UsedNu = message.used_nu;
end