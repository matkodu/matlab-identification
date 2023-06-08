function ros1msg = labust_msgs_msg_PIDParamsUpdate_2To1_Converter(message,ros1msg)
%labust_msgs_msg_PIDParamsUpdate_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Kp = message.kp;
ros1msg.Ki = message.ki;
ros1msg.Kd = message.kd;
ros1msg.B = message.b;
ros1msg.Ulow = message.ulow;
ros1msg.Uhigh = message.uhigh;
ros1msg.Ilow = message.ilow;
ros1msg.Ihigh = message.ihigh;
ros1msg.Dof = message.dof;
end