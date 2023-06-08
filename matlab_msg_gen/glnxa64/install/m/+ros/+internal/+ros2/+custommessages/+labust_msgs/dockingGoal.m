function [data, info] = dockingGoal
%DockingGoal gives an empty data for labust_msgs/DockingGoal
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/DockingGoal';
[data.docking_action, info.docking_action] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.docking_slot, info.docking_slot] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.search_yaw_rate, info.search_yaw_rate] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.max_yaw_rate, info.max_yaw_rate] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.max_surge_speed, info.max_surge_speed] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.surge_stdev, info.surge_stdev] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'labust_msgs/DockingGoal';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'docking_action';
info.MatPath{2} = 'docking_slot';
info.MatPath{3} = 'search_yaw_rate';
info.MatPath{4} = 'max_yaw_rate';
info.MatPath{5} = 'max_surge_speed';
info.MatPath{6} = 'surge_stdev';
