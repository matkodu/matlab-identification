function [data, info] = nanomodemPayload
%NanomodemPayload gives an empty data for labust_msgs/NanomodemPayload
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/NanomodemPayload';
[data.header, info.header] = ros.internal.ros2.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.BRDCST, info.BRDCST] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.UNICST, info.UNICST] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.msg, info.msg] = ros.internal.ros2.messages.ros2.default_type('uint8',NaN,0);
[data.sender_id, info.sender_id] = ros.internal.ros2.messages.ros2.default_type('int16',1,0);
[data.msg_type, info.msg_type] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'labust_msgs/NanomodemPayload';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,10);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.stamp';
info.MatPath{3} = 'header.stamp.sec';
info.MatPath{4} = 'header.stamp.nanosec';
info.MatPath{5} = 'header.frame_id';
info.MatPath{6} = 'BRDCST';
info.MatPath{7} = 'UNICST';
info.MatPath{8} = 'msg';
info.MatPath{9} = 'sender_id';
info.MatPath{10} = 'msg_type';