function [data, info] = unRegisterControllerResponse
%UnRegisterController gives an empty data for labust_msgs/UnRegisterControllerResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/UnRegisterControllerResponse';
[data.SUCCESS, info.SUCCESS] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.reply, info.reply] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'labust_msgs/UnRegisterControllerResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'SUCCESS';
info.MatPath{2} = 'reply';
