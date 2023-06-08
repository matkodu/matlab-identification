function [data, info] = evaluateExpressionRequest
%EvaluateExpression gives an empty data for labust_msgs/EvaluateExpressionRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/EvaluateExpressionRequest';
[data.expression, info.expression] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
info.MessageType = 'labust_msgs/EvaluateExpressionRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'expression';
