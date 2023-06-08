function [data, info] = rosbagControlRequest
%RosbagControl gives an empty data for labust_msgs/RosbagControlRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/RosbagControlRequest';
[data.action, info.action] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.bag_name, info.bag_name] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
info.MessageType = 'labust_msgs/RosbagControlRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'action';
info.MatPath{2} = 'bag_name';
