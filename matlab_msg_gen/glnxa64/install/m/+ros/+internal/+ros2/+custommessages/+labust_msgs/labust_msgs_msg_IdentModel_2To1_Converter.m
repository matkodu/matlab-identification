function ros1msg = labust_msgs_msg_IdentModel_2To1_Converter(message,ros1msg)
%labust_msgs_msg_IdentModel_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.ModelType = message.model_type;
ros1msg.Dof = message.dof;
ros1msg.SsDimN = message.ss_dim_n;
ros1msg.SsDimM = message.ss_dim_m;
end