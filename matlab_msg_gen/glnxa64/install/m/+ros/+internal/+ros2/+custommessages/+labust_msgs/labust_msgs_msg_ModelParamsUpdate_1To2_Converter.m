function ros2msg = labust_msgs_msg_ModelParamsUpdate_1To2_Converter(message,ros2msg)
%labust_msgs_msg_ModelParamsUpdate_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.dof = message.Dof;
ros2msg.alpha = message.Alpha;
ros2msg.beta = message.Beta;
ros2msg.betaa = message.Betaa;
ros2msg.delta = message.Delta;
ros2msg.wn = message.Wn;
ros2msg.use_linear = message.UseLinear;
end