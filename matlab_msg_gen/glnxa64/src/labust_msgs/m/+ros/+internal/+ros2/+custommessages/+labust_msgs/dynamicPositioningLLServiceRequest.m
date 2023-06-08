function [data, info] = dynamicPositioningLLServiceRequest
%DynamicPositioningLLService gives an empty data for labust_msgs/DynamicPositioningLLServiceRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/DynamicPositioningLLServiceRequest';
[data.point, info.point] = ros.internal.ros2.custommessages.geographic_msgs.geoPoint;
info.point.MLdataType = 'struct';
[data.heading, info.heading] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
info.MessageType = 'labust_msgs/DynamicPositioningLLServiceRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'point';
info.MatPath{2} = 'point.latitude';
info.MatPath{3} = 'point.longitude';
info.MatPath{4} = 'point.altitude';
info.MatPath{5} = 'heading';
