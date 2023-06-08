function [data, info] = controllerSelectResponse
%ControllerSelect gives an empty data for labust_msgs/ControllerSelectResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/ControllerSelectResponse';
[data.name, info.name] = ros.internal.ros2.messages.ros2.char('string',NaN,NaN,0);
[data.success, info.success] = ros.internal.ros2.messages.ros2.default_type('logical',NaN,0);
info.MessageType = 'labust_msgs/ControllerSelectResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'name';
info.MatPath{2} = 'success';
