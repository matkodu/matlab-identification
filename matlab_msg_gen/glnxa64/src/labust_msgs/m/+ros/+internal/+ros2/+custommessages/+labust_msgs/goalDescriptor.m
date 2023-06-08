function [data, info] = goalDescriptor
%GoalDescriptor gives an empty data for labust_msgs/GoalDescriptor
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/GoalDescriptor';
[data.requester, info.requester] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.id, info.id] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.priority, info.priority] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.PRIORITY_LOW, info.PRIORITY_LOW] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 0, [NaN]);
[data.PRIORITY_NORMAL, info.PRIORITY_NORMAL] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 10, [NaN]);
[data.PRIORITY_AVOID_OBSTACLE, info.PRIORITY_AVOID_OBSTACLE] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 20, [NaN]);
[data.PRIORITY_EMERGENCY, info.PRIORITY_EMERGENCY] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 30, [NaN]);
[data.PRIORITY_MANUAL_OVERRIDE, info.PRIORITY_MANUAL_OVERRIDE] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 40, [NaN]);
info.MessageType = 'labust_msgs/GoalDescriptor';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'requester';
info.MatPath{2} = 'id';
info.MatPath{3} = 'priority';
info.MatPath{4} = 'PRIORITY_LOW';
info.MatPath{5} = 'PRIORITY_NORMAL';
info.MatPath{6} = 'PRIORITY_AVOID_OBSTACLE';
info.MatPath{7} = 'PRIORITY_EMERGENCY';
info.MatPath{8} = 'PRIORITY_MANUAL_OVERRIDE';
