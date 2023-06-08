function [data, info] = dockingServiceRequest
%DockingService gives an empty data for labust_msgs/DockingServiceRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/DockingServiceRequest';
[data.docking_action, info.docking_action] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.docking_slot, info.docking_slot] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'labust_msgs/DockingServiceRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'docking_action';
info.MatPath{2} = 'docking_slot';
