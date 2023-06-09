function [data, info] = pIDParamsUpdate
%PIDParamsUpdate gives an empty data for labust_msgs/PIDParamsUpdate
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/PIDParamsUpdate';
[data.SURGE, info.SURGE] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 0, [NaN]);
[data.SWAY, info.SWAY] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 1, [NaN]);
[data.HEAVE, info.HEAVE] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 2, [NaN]);
[data.ROLL, info.ROLL] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 3, [NaN]);
[data.PITCH, info.PITCH] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 4, [NaN]);
[data.YAW, info.YAW] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 5, [NaN]);
[data.kp, info.kp] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.ki, info.ki] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.kd, info.kd] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.b, info.b] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.ulow, info.ulow] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.uhigh, info.uhigh] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.ilow, info.ilow] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.ihigh, info.ihigh] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.dof, info.dof] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
info.MessageType = 'labust_msgs/PIDParamsUpdate';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,15);
info.MatPath{1} = 'SURGE';
info.MatPath{2} = 'SWAY';
info.MatPath{3} = 'HEAVE';
info.MatPath{4} = 'ROLL';
info.MatPath{5} = 'PITCH';
info.MatPath{6} = 'YAW';
info.MatPath{7} = 'kp';
info.MatPath{8} = 'ki';
info.MatPath{9} = 'kd';
info.MatPath{10} = 'b';
info.MatPath{11} = 'ulow';
info.MatPath{12} = 'uhigh';
info.MatPath{13} = 'ilow';
info.MatPath{14} = 'ihigh';
info.MatPath{15} = 'dof';
