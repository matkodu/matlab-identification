function [data, info] = manualConfiguration
%ManualConfiguration gives an empty data for labust_msgs/ManualConfiguration
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/ManualConfiguration';
[data.DISABLED, info.DISABLED] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, -1, [NaN]);
[data.X, info.X] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 0, [NaN]);
[data.Y, info.Y] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 1, [NaN]);
[data.Z, info.Z] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 2, [NaN]);
[data.K, info.K] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 3, [NaN]);
[data.M, info.M] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 4, [NaN]);
[data.N, info.N] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 5, [NaN]);
[data.axes_map, info.axes_map] = ros.internal.ros2.messages.ros2.default_type('int32',NaN,0);
[data.scale_map, info.scale_map] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.integrated, info.integrated] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.maximum_effort, info.maximum_effort] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.maximum_nu, info.maximum_nu] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.maximum_speed, info.maximum_speed] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.sampling_time, info.sampling_time] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.use_ff, info.use_ff] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.topic, info.topic] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
info.MessageType = 'labust_msgs/ManualConfiguration';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,16);
info.MatPath{1} = 'DISABLED';
info.MatPath{2} = 'X';
info.MatPath{3} = 'Y';
info.MatPath{4} = 'Z';
info.MatPath{5} = 'K';
info.MatPath{6} = 'M';
info.MatPath{7} = 'N';
info.MatPath{8} = 'axes_map';
info.MatPath{9} = 'scale_map';
info.MatPath{10} = 'integrated';
info.MatPath{11} = 'maximum_effort';
info.MatPath{12} = 'maximum_nu';
info.MatPath{13} = 'maximum_speed';
info.MatPath{14} = 'sampling_time';
info.MatPath{15} = 'use_ff';
info.MatPath{16} = 'topic';
