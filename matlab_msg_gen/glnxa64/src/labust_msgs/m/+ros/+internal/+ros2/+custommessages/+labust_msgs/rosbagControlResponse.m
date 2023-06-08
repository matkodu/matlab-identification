function [data, info] = rosbagControlResponse
%RosbagControl gives an empty data for labust_msgs/RosbagControlResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/RosbagControlResponse';
[data.result, info.result] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
info.MessageType = 'labust_msgs/RosbagControlResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'result';
