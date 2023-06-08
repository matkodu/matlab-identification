function [data, info] = dynamicPositioningResult
%DynamicPositioningResult gives an empty data for labust_msgs/DynamicPositioningResult
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/DynamicPositioningResult';
[data.position, info.position] = ros.internal.ros2.messages.geometry_msgs.pointStamped;
info.position.MLdataType = 'struct';
info.MessageType = 'labust_msgs/DynamicPositioningResult';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,10);
info.MatPath{1} = 'position';
info.MatPath{2} = 'position.header';
info.MatPath{3} = 'position.header.stamp';
info.MatPath{4} = 'position.header.stamp.sec';
info.MatPath{5} = 'position.header.stamp.nanosec';
info.MatPath{6} = 'position.header.frame_id';
info.MatPath{7} = 'position.point';
info.MatPath{8} = 'position.point.x';
info.MatPath{9} = 'position.point.y';
info.MatPath{10} = 'position.point.z';
