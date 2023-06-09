function [data, info] = registerControllerRequest
%RegisterController gives an empty data for labust_msgs/RegisterControllerRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/RegisterControllerRequest';
[data.SURGE, info.SURGE] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 0, [NaN]);
[data.SWAY, info.SWAY] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 1, [NaN]);
[data.HEAVE, info.HEAVE] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 2, [NaN]);
[data.ROLL, info.ROLL] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 3, [NaN]);
[data.PITCH, info.PITCH] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 4, [NaN]);
[data.YAW, info.YAW] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 5, [NaN]);
[data.name, info.name] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.srv_name, info.srv_name] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.used_dofs, info.used_dofs] = ros.internal.ros2.messages.ros2.default_type('int32',6,0);
[data.used_cnt, info.used_cnt] = ros.internal.ros2.messages.ros2.char('string',NaN,NaN,0);
[data.used_meas, info.used_meas] = ros.internal.ros2.messages.ros2.default_type('int32',12,0);
[data.used_derived, info.used_derived] = ros.internal.ros2.messages.ros2.char('string',NaN,NaN,0);
info.MessageType = 'labust_msgs/RegisterControllerRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,12);
info.MatPath{1} = 'SURGE';
info.MatPath{2} = 'SWAY';
info.MatPath{3} = 'HEAVE';
info.MatPath{4} = 'ROLL';
info.MatPath{5} = 'PITCH';
info.MatPath{6} = 'YAW';
info.MatPath{7} = 'name';
info.MatPath{8} = 'srv_name';
info.MatPath{9} = 'used_dofs';
info.MatPath{10} = 'used_cnt';
info.MatPath{11} = 'used_meas';
info.MatPath{12} = 'used_derived';
