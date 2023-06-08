function [data, info] = evaluateExpressionResponse
%EvaluateExpression gives an empty data for labust_msgs/EvaluateExpressionResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/EvaluateExpressionResponse';
[data.result, info.result] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
info.MessageType = 'labust_msgs/EvaluateExpressionResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'result';
