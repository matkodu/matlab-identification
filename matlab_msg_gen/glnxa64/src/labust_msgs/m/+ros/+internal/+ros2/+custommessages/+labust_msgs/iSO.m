function [data, info] = iSO
%ISO gives an empty data for labust_msgs/ISO
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/ISO';
[data.dof, info.dof] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.command, info.command] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.hysteresis, info.hysteresis] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.reference, info.reference] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.sampling_rate, info.sampling_rate] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'labust_msgs/ISO';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'dof';
info.MatPath{2} = 'command';
info.MatPath{3} = 'hysteresis';
info.MatPath{4} = 'reference';
info.MatPath{5} = 'sampling_rate';
