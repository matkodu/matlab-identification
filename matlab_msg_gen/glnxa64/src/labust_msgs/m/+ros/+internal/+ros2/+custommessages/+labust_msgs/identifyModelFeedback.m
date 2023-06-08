function [data, info] = identifyModelFeedback
%IdentifyModelFeedback gives an empty data for labust_msgs/IdentifyModelFeedback
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/IdentifyModelFeedback';
[data.dof, info.dof] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.progress, info.progress] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.error, info.error] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.additional_data, info.additional_data] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
info.MessageType = 'labust_msgs/IdentifyModelFeedback';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'dof';
info.MatPath{2} = 'progress';
info.MatPath{3} = 'error';
info.MatPath{4} = 'additional_data';
