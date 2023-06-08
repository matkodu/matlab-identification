function [data, info] = startParser
%StartParser gives an empty data for labust_msgs/StartParser
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/StartParser';
[data.method, info.method] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.FILENAME, info.FILENAME] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.STRING, info.STRING] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.mission_data, info.mission_data] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.relative, info.relative] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.start_position, info.start_position] = ros.internal.ros2.custommessages.auv_msgs.nED;
info.start_position.MLdataType = 'struct';
info.MessageType = 'labust_msgs/StartParser';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,9);
info.MatPath{1} = 'method';
info.MatPath{2} = 'FILENAME';
info.MatPath{3} = 'STRING';
info.MatPath{4} = 'mission_data';
info.MatPath{5} = 'relative';
info.MatPath{6} = 'start_position';
info.MatPath{7} = 'start_position.north';
info.MatPath{8} = 'start_position.east';
info.MatPath{9} = 'start_position.depth';
