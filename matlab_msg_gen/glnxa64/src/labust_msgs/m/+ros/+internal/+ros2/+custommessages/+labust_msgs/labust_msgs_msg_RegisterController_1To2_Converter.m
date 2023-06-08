function ros2msg = labust_msgs_msg_RegisterController_1To2_Converter(message,ros2msg)
%labust_msgs_msg_RegisterController_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.parent = message.Parent;
ros2msg.name = message.Name;
ros2msg.used_tau = message.UsedTau;
ros2msg.used_nu = message.UsedNu;
end