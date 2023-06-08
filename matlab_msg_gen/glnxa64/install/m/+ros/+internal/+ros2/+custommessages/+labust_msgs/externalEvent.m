function [data, info] = externalEvent
%ExternalEvent gives an empty data for labust_msgs/ExternalEvent
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/ExternalEvent';
[data.id, info.id] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.description, info.description] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.value, info.value] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'labust_msgs/ExternalEvent';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'id';
info.MatPath{2} = 'description';
info.MatPath{3} = 'value';
