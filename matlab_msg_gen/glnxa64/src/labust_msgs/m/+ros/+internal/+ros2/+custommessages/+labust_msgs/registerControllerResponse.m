function [data, info] = registerControllerResponse
%RegisterController gives an empty data for labust_msgs/RegisterControllerResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/RegisterControllerResponse';
[data.accepted, info.accepted] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.unmet_cnt, info.unmet_cnt] = ros.internal.ros2.messages.ros2.char('string',NaN,NaN,0);
info.MessageType = 'labust_msgs/RegisterControllerResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'accepted';
info.MatPath{2} = 'unmet_cnt';
