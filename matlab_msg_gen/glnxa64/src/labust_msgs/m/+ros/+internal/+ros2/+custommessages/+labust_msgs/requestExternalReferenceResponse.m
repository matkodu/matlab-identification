function [data, info] = requestExternalReferenceResponse
%RequestExternalReference gives an empty data for labust_msgs/RequestExternalReferenceResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/RequestExternalReferenceResponse';
[data.success, info.success] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.identity_token, info.identity_token] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.message, info.message] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
info.MessageType = 'labust_msgs/RequestExternalReferenceResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'success';
info.MatPath{2} = 'identity_token';
info.MatPath{3} = 'message';
