function [data, info] = manualSelectRequest
%ManualSelect gives an empty data for labust_msgs/ManualSelectRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/ManualSelectRequest';
[data.X, info.X] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 0, [NaN]);
[data.Y, info.Y] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 1, [NaN]);
[data.Z, info.Z] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 2, [NaN]);
[data.K, info.K] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 3, [NaN]);
[data.M, info.M] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 4, [NaN]);
[data.N, info.N] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 5, [NaN]);
[data.DISABLED, info.DISABLED] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 0, [NaN]);
[data.EFFORT, info.EFFORT] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 1, [NaN]);
[data.SPEED, info.SPEED] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 2, [NaN]);
[data.POSITION, info.POSITION] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 3, [NaN]);
[data.use_generator, info.use_generator] = ros.internal.ros2.messages.ros2.default_type('int32',6,0);
info.MessageType = 'labust_msgs/ManualSelectRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,11);
info.MatPath{1} = 'X';
info.MatPath{2} = 'Y';
info.MatPath{3} = 'Z';
info.MatPath{4} = 'K';
info.MatPath{5} = 'M';
info.MatPath{6} = 'N';
info.MatPath{7} = 'DISABLED';
info.MatPath{8} = 'EFFORT';
info.MatPath{9} = 'SPEED';
info.MatPath{10} = 'POSITION';
info.MatPath{11} = 'use_generator';
