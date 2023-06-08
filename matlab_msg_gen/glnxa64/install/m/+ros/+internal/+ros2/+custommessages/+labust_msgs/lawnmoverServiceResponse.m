function [data, info] = lawnmoverServiceResponse
%LawnmoverService gives an empty data for labust_msgs/LawnmoverServiceResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/LawnmoverServiceResponse';
[data.status, info.status] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
info.MessageType = 'labust_msgs/LawnmoverServiceResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'status';
