function [data, info] = unRegisterControllerRequest
%UnRegisterController gives an empty data for labust_msgs/UnRegisterControllerRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/UnRegisterControllerRequest';
[data.SINGLE, info.SINGLE] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.SAME_PARENT, info.SAME_PARENT] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.ALL, info.ALL] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
[data.type, info.type] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.parent, info.parent] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.name, info.name] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
info.MessageType = 'labust_msgs/UnRegisterControllerRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'SINGLE';
info.MatPath{2} = 'SAME_PARENT';
info.MatPath{3} = 'ALL';
info.MatPath{4} = 'type';
info.MatPath{5} = 'parent';
info.MatPath{6} = 'name';
