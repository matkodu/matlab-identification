function [data, info] = controllerState
%ControllerState gives an empty data for labust_msgs/ControllerState
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/ControllerState';
[data.name, info.name] = ros.internal.ros2.messages.ros2.char('string',NaN,NaN,0);
[data.info, info.info] = ros.internal.ros2.custommessages.labust_msgs.controllerInfo;
info.info.MLdataType = 'struct';
info.info.MaxLen = NaN;
info.info.MinLen = 0;
info.MessageType = 'labust_msgs/ControllerState';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,11);
info.MatPath{1} = 'name';
info.MatPath{2} = 'info';
info.MatPath{3} = 'info.DISABLED';
info.MatPath{4} = 'info.MANUAL';
info.MatPath{5} = 'info.EXTERNAL';
info.MatPath{6} = 'info.TRACKING';
info.MatPath{7} = 'info.manual_topic';
info.MatPath{8} = 'info.external_topic';
info.MatPath{9} = 'info.state_topic';
info.MatPath{10} = 'info.tracking_topic';
info.MatPath{11} = 'info.state';
