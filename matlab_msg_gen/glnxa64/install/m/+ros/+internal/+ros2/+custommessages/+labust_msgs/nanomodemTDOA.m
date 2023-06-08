function [data, info] = nanomodemTDOA
%NanomodemTDOA gives an empty data for labust_msgs/NanomodemTDOA
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/NanomodemTDOA';
[data.header, info.header] = ros.internal.ros2.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.fpga_time, info.fpga_time] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.modem_times, info.modem_times] = ros.internal.ros2.messages.ros2.default_type('uint64',NaN,0);
info.MessageType = 'labust_msgs/NanomodemTDOA';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,7);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.stamp';
info.MatPath{3} = 'header.stamp.sec';
info.MatPath{4} = 'header.stamp.nanosec';
info.MatPath{5} = 'header.frame_id';
info.MatPath{6} = 'fpga_time';
info.MatPath{7} = 'modem_times';
