function [data, info] = nanomodemRange
%NanomodemRange gives an empty data for labust_msgs/NanomodemRange
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/NanomodemRange';
[data.header, info.header] = ros.internal.ros2.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.range, info.range] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.range_m, info.range_m] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.id, info.id] = ros.internal.ros2.messages.ros2.default_type('int16',1,0);
info.MessageType = 'labust_msgs/NanomodemRange';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.stamp';
info.MatPath{3} = 'header.stamp.sec';
info.MatPath{4} = 'header.stamp.nanosec';
info.MatPath{5} = 'header.frame_id';
info.MatPath{6} = 'range';
info.MatPath{7} = 'range_m';
info.MatPath{8} = 'id';
