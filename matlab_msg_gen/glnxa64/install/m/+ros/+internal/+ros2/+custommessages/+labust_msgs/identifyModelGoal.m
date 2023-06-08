function [data, info] = identifyModelGoal
%IdentifyModelGoal gives an empty data for labust_msgs/IdentifyModelGoal
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/IdentifyModelGoal';
[data.X, info.X] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 1, [NaN]);
[data.Y, info.Y] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 2, [NaN]);
[data.Z, info.Z] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 4, [NaN]);
[data.K, info.K] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 8, [NaN]);
[data.M, info.M] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 16, [NaN]);
[data.N, info.N] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 32, [NaN]);
[data.MODEL_TF, info.MODEL_TF] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 0, [NaN]);
[data.dof, info.dof] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
info.MessageType = 'labust_msgs/IdentifyModelGoal';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'X';
info.MatPath{2} = 'Y';
info.MatPath{3} = 'Z';
info.MatPath{4} = 'K';
info.MatPath{5} = 'M';
info.MatPath{6} = 'N';
info.MatPath{7} = 'MODEL_TF';
info.MatPath{8} = 'dof';
