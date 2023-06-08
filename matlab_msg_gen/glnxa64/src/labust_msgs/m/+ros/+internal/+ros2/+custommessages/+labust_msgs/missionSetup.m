function [data, info] = missionSetup
%MissionSetup gives an empty data for labust_msgs/MissionSetup
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/MissionSetup';
[data.mission_params, info.mission_params] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.mission_events, info.mission_events] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.mission_offset, info.mission_offset] = ros.internal.ros2.custommessages.auv_msgs.nED;
info.mission_offset.MLdataType = 'struct';
info.MessageType = 'labust_msgs/MissionSetup';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'mission_params';
info.MatPath{2} = 'mission_events';
info.MatPath{3} = 'mission_offset';
info.MatPath{4} = 'mission_offset.north';
info.MatPath{5} = 'mission_offset.east';
info.MatPath{6} = 'mission_offset.depth';
