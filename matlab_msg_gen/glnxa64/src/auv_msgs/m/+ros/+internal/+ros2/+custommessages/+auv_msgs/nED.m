function [data, info] = nED
%NED gives an empty data for auv_msgs/NED
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'auv_msgs/NED';
[data.north, info.north] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.east, info.east] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.depth, info.depth] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
info.MessageType = 'auv_msgs/NED';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'north';
info.MatPath{2} = 'east';
info.MatPath{3} = 'depth';
