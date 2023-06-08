function [data, info] = getRoutePlanRequest
%GetRoutePlan gives an empty data for geographic_msgs/GetRoutePlanRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'geographic_msgs/GetRoutePlanRequest';
[data.network, info.network] = ros.internal.ros2.messages.unique_identifier_msgs.uUID;
info.network.MLdataType = 'struct';
[data.start, info.start] = ros.internal.ros2.messages.unique_identifier_msgs.uUID;
info.start.MLdataType = 'struct';
[data.goal, info.goal] = ros.internal.ros2.messages.unique_identifier_msgs.uUID;
info.goal.MLdataType = 'struct';
info.MessageType = 'geographic_msgs/GetRoutePlanRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'network';
info.MatPath{2} = 'network.uuid';
info.MatPath{3} = 'start';
info.MatPath{4} = 'start.uuid';
info.MatPath{5} = 'goal';
info.MatPath{6} = 'goal.uuid';
