function [data, info] = nEDArray
%NEDArray gives an empty data for auv_msgs/NEDArray
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'auv_msgs/NEDArray';
[data.neds, info.neds] = ros.internal.ros2.custommessages.auv_msgs.nED;
info.neds.MLdataType = 'struct';
info.neds.MaxLen = NaN;
info.neds.MinLen = 0;
info.MessageType = 'auv_msgs/NEDArray';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'neds';
info.MatPath{2} = 'neds.north';
info.MatPath{3} = 'neds.east';
info.MatPath{4} = 'neds.depth';
