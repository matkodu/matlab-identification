function [data, info] = requestExternalReferenceRequest
%RequestExternalReference gives an empty data for labust_msgs/RequestExternalReferenceRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/RequestExternalReferenceRequest';
[data.IGNORE, info.IGNORE] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 0, [NaN]);
[data.TAU_REF, info.TAU_REF] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 1, [NaN]);
[data.NU_REF, info.NU_REF] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 2, [NaN]);
[data.ETA_REF, info.ETA_REF] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 3, [NaN]);
[data.control_modes, info.control_modes] = ros.internal.ros2.messages.ros2.default_type('int32',6,0);
[data.identity, info.identity] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
info.MessageType = 'labust_msgs/RequestExternalReferenceRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'IGNORE';
info.MatPath{2} = 'TAU_REF';
info.MatPath{3} = 'NU_REF';
info.MatPath{4} = 'ETA_REF';
info.MatPath{5} = 'control_modes';
info.MatPath{6} = 'identity';
