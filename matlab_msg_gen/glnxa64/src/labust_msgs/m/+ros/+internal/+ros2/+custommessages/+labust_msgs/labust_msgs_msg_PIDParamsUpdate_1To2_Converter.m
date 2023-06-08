function ros2msg = labust_msgs_msg_PIDParamsUpdate_1To2_Converter(message,ros2msg)
%labust_msgs_msg_PIDParamsUpdate_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.kp = message.Kp;
ros2msg.ki = message.Ki;
ros2msg.kd = message.Kd;
ros2msg.b = message.B;
ros2msg.ulow = message.Ulow;
ros2msg.uhigh = message.Uhigh;
ros2msg.ilow = message.Ilow;
ros2msg.ihigh = message.Ihigh;
ros2msg.dof = message.Dof;
end