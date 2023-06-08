function ros1msg = labust_msgs_msg_ModelParamsUpdate_2To1_Converter(message,ros1msg)
%labust_msgs_msg_ModelParamsUpdate_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Dof = message.dof;
ros1msg.Alpha = message.alpha;
ros1msg.Beta = message.beta;
ros1msg.Betaa = message.betaa;
ros1msg.Delta = message.delta;
ros1msg.Wn = message.wn;
ros1msg.UseLinear = message.use_linear;
end