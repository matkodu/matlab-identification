function [data, info] = rhodamineAdc
%RhodamineAdc gives an empty data for labust_msgs/RhodamineAdc
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/RhodamineAdc';
[data.adc, info.adc] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
[data.gain, info.gain] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'labust_msgs/RhodamineAdc';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'adc';
info.MatPath{2} = 'gain';
