function [data, info] = registerController
%RegisterController gives an empty data for labust_msgs/RegisterController
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/RegisterController';
[data.SURGE, info.SURGE] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.SWAY, info.SWAY] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.HEAVE, info.HEAVE] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
[data.ROLL, info.ROLL] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 3, [NaN]);
[data.PITCH, info.PITCH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 4, [NaN]);
[data.YAW, info.YAW] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 5, [NaN]);
[data.X, info.X] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.Y, info.Y] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.Z, info.Z] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
[data.K, info.K] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 3, [NaN]);
[data.M, info.M] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 4, [NaN]);
[data.N, info.N] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 5, [NaN]);
[data.parent, info.parent] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.name, info.name] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.used_tau, info.used_tau] = ros.internal.ros2.messages.ros2.default_type('int8',6,0);
[data.used_nu, info.used_nu] = ros.internal.ros2.messages.ros2.default_type('int8',6,0);
info.MessageType = 'labust_msgs/RegisterController';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,16);
info.MatPath{1} = 'SURGE';
info.MatPath{2} = 'SWAY';
info.MatPath{3} = 'HEAVE';
info.MatPath{4} = 'ROLL';
info.MatPath{5} = 'PITCH';
info.MatPath{6} = 'YAW';
info.MatPath{7} = 'X';
info.MatPath{8} = 'Y';
info.MatPath{9} = 'Z';
info.MatPath{10} = 'K';
info.MatPath{11} = 'M';
info.MatPath{12} = 'N';
info.MatPath{13} = 'parent';
info.MatPath{14} = 'name';
info.MatPath{15} = 'used_tau';
info.MatPath{16} = 'used_nu';