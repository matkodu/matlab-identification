function [data, info] = registerControllerV3Request
%RegisterControllerV3 gives an empty data for labust_msgs/RegisterControllerV3Request
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/RegisterControllerV3Request';
[data.parent, info.parent] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.name, info.name] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.has_manual, info.has_manual] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.used_tau, info.used_tau] = ros.internal.ros2.messages.ros2.default_type('int8',6,0);
[data.used_other, info.used_other] = ros.internal.ros2.messages.ros2.char('string',NaN,NaN,0);
[data.used_resources, info.used_resources] = ros.internal.ros2.messages.ros2.char('string',NaN,NaN,0);
info.MessageType = 'labust_msgs/RegisterControllerV3Request';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'parent';
info.MatPath{2} = 'name';
info.MatPath{3} = 'has_manual';
info.MatPath{4} = 'used_tau';
info.MatPath{5} = 'used_other';
info.MatPath{6} = 'used_resources';
