function [data, info] = registerControllerV3Response
%RegisterControllerV3 gives an empty data for labust_msgs/RegisterControllerV3Response
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/RegisterControllerV3Response';
[data.SUCCESS, info.SUCCESS] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.MISSING_DEPENDENCY, info.MISSING_DEPENDENCY] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.ALREADY_REGISTERED, info.ALREADY_REGISTERED] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
[data.reply, info.reply] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'labust_msgs/RegisterControllerV3Response';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'SUCCESS';
info.MatPath{2} = 'MISSING_DEPENDENCY';
info.MatPath{3} = 'ALREADY_REGISTERED';
info.MatPath{4} = 'reply';
