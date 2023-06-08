function [data, info] = eventData
%EventData gives an empty data for labust_msgs/EventData
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/EventData';
[data.timeout, info.timeout] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.on_event_next, info.on_event_next] = ros.internal.ros2.messages.ros2.default_type('uint8',NaN,0);
[data.on_event_next_active, info.on_event_next_active] = ros.internal.ros2.messages.ros2.default_type('uint8',NaN,0);
info.MessageType = 'labust_msgs/EventData';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timeout';
info.MatPath{2} = 'on_event_next';
info.MatPath{3} = 'on_event_next_active';
