function [data, info] = controllerSelectRequest
%ControllerSelect gives an empty data for labust_msgs/ControllerSelectRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/ControllerSelectRequest';
[data.DISABLED, info.DISABLED] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.MANUAL, info.MANUAL] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.EXTERNAL, info.EXTERNAL] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
[data.TRACKING, info.TRACKING] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 3, [NaN]);
[data.ACTIVATE, info.ACTIVATE] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
[data.DEACTIVATE, info.DEACTIVATE] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 3, [NaN]);
[data.name, info.name] = ros.internal.ros2.messages.ros2.char('string',NaN,NaN,0);
[data.state, info.state] = ros.internal.ros2.messages.ros2.default_type('int32',NaN,0);
info.MessageType = 'labust_msgs/ControllerSelectRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'DISABLED';
info.MatPath{2} = 'MANUAL';
info.MatPath{3} = 'EXTERNAL';
info.MatPath{4} = 'TRACKING';
info.MatPath{5} = 'ACTIVATE';
info.MatPath{6} = 'DEACTIVATE';
info.MatPath{7} = 'name';
info.MatPath{8} = 'state';
