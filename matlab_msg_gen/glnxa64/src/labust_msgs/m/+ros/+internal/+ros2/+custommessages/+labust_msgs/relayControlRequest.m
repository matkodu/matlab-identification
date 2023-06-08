function [data, info] = relayControlRequest
%RelayControl gives an empty data for labust_msgs/RelayControlRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/RelayControlRequest';
[data.relay_num, info.relay_num] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.relay_state, info.relay_state] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.timeout, info.timeout] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'labust_msgs/RelayControlRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'relay_num';
info.MatPath{2} = 'relay_state';
info.MatPath{3} = 'timeout';
