function [data, info] = identModel
%IdentModel gives an empty data for labust_msgs/IdentModel
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/IdentModel';
[data.X, info.X] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 1, [NaN]);
[data.Y, info.Y] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 2, [NaN]);
[data.Z, info.Z] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 4, [NaN]);
[data.K, info.K] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 8, [NaN]);
[data.M, info.M] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 16, [NaN]);
[data.N, info.N] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 32, [NaN]);
[data.MODEL_TF, info.MODEL_TF] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 0, [NaN]);
[data.MODEL_SS, info.MODEL_SS] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 1, [NaN]);
[data.model_type, info.model_type] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.dof, info.dof] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.tf_num, info.tf_num] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.tf_den, info.tf_den] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.ss_dim_n, info.ss_dim_n] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.ss_dim_m, info.ss_dim_m] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.ss_mat_a, info.ss_mat_a] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.ss_mat_b, info.ss_mat_b] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.ss_mat_c, info.ss_mat_c] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.ss_mat_d, info.ss_mat_d] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
info.MessageType = 'labust_msgs/IdentModel';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,18);
info.MatPath{1} = 'X';
info.MatPath{2} = 'Y';
info.MatPath{3} = 'Z';
info.MatPath{4} = 'K';
info.MatPath{5} = 'M';
info.MatPath{6} = 'N';
info.MatPath{7} = 'MODEL_TF';
info.MatPath{8} = 'MODEL_SS';
info.MatPath{9} = 'model_type';
info.MatPath{10} = 'dof';
info.MatPath{11} = 'tf_num';
info.MatPath{12} = 'tf_den';
info.MatPath{13} = 'ss_dim_n';
info.MatPath{14} = 'ss_dim_m';
info.MatPath{15} = 'ss_mat_a';
info.MatPath{16} = 'ss_mat_b';
info.MatPath{17} = 'ss_mat_c';
info.MatPath{18} = 'ss_mat_d';