function [data, info] = go2PointUA
%Go2PointUA gives an empty data for labust_msgs/Go2PointUA
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/Go2PointUA';
[data.point, info.point] = ros.internal.ros2.custommessages.auv_msgs.nED;
info.point.MLdataType = 'struct';
[data.speed, info.speed] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.victory_radius, info.victory_radius] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'labust_msgs/Go2PointUA';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'point';
info.MatPath{2} = 'point.north';
info.MatPath{3} = 'point.east';
info.MatPath{4} = 'point.depth';
info.MatPath{5} = 'speed';
info.MatPath{6} = 'victory_radius';
