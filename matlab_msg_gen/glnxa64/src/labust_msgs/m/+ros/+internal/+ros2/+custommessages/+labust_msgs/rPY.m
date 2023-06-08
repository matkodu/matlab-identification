function [data, info] = rPY
%RPY gives an empty data for labust_msgs/RPY
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/RPY';
[data.roll, info.roll] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.pitch, info.pitch] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.yaw, info.yaw] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'labust_msgs/RPY';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'roll';
info.MatPath{2} = 'pitch';
info.MatPath{3} = 'yaw';
