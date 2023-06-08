function [data, info] = dynamicPositioning
%DynamicPositioning gives an empty data for labust_msgs/DynamicPositioning
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/DynamicPositioning';
[data.point, info.point] = ros.internal.ros2.custommessages.auv_msgs.nED;
info.point.MLdataType = 'struct';
[data.heading, info.heading] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'labust_msgs/DynamicPositioning';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'point';
info.MatPath{2} = 'point.north';
info.MatPath{3} = 'point.east';
info.MatPath{4} = 'point.depth';
info.MatPath{5} = 'heading';
