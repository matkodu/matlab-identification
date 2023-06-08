function [data, info] = missionStatus
%MissionStatus gives an empty data for labust_msgs/MissionStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/MissionStatus';
[data.mission_active, info.mission_active] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.active_primitive, info.active_primitive] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.mission_execution_ready, info.mission_execution_ready] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.manual_enabled, info.manual_enabled] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
info.MessageType = 'labust_msgs/MissionStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'mission_active';
info.MatPath{2} = 'active_primitive';
info.MatPath{3} = 'mission_execution_ready';
info.MatPath{4} = 'manual_enabled';
