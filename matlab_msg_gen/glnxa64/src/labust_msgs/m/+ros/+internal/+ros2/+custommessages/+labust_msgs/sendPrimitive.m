function [data, info] = sendPrimitive
%SendPrimitive gives an empty data for labust_msgs/SendPrimitive
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/SendPrimitive';
[data.primitive_id, info.primitive_id] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.primitive_data, info.primitive_data] = ros.internal.ros2.messages.ros2.default_type('uint8',NaN,0);
[data.event, info.event] = ros.internal.ros2.custommessages.labust_msgs.eventData;
info.event.MLdataType = 'struct';
[data.primitive_string, info.primitive_string] = ros.internal.ros2.messages.std_msgs.string;
info.primitive_string.MLdataType = 'struct';
info.MessageType = 'labust_msgs/SendPrimitive';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'primitive_id';
info.MatPath{2} = 'primitive_data';
info.MatPath{3} = 'event';
info.MatPath{4} = 'event.timeout';
info.MatPath{5} = 'event.on_event_next';
info.MatPath{6} = 'event.on_event_next_active';
info.MatPath{7} = 'primitive_string';
info.MatPath{8} = 'primitive_string.data';
