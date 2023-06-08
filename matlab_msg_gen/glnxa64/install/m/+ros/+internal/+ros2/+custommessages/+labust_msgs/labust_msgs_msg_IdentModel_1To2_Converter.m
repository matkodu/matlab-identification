function ros2msg = labust_msgs_msg_IdentModel_1To2_Converter(message,ros2msg)
%labust_msgs_msg_IdentModel_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.model_type = message.ModelType;
ros2msg.dof = message.Dof;
ros2msg.ss_dim_n = message.SsDimN;
ros2msg.ss_dim_m = message.SsDimM;
end