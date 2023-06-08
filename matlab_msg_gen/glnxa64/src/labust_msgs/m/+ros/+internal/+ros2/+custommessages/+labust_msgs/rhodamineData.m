function [data, info] = rhodamineData
%RhodamineData gives an empty data for labust_msgs/RhodamineData
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/RhodamineData';
[data.header, info.header] = ros.internal.ros2.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.position, info.position] = ros.internal.ros2.custommessages.geographic_msgs.geoPoint;
info.position.MLdataType = 'struct';
[data.adc, info.adc] = ros.internal.ros2.custommessages.labust_msgs.rhodamineAdc;
info.adc.MLdataType = 'struct';
info.MessageType = 'labust_msgs/RhodamineData';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,12);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.stamp';
info.MatPath{3} = 'header.stamp.sec';
info.MatPath{4} = 'header.stamp.nanosec';
info.MatPath{5} = 'header.frame_id';
info.MatPath{6} = 'position';
info.MatPath{7} = 'position.latitude';
info.MatPath{8} = 'position.longitude';
info.MatPath{9} = 'position.altitude';
info.MatPath{10} = 'adc';
info.MatPath{11} = 'adc.adc';
info.MatPath{12} = 'adc.gain';