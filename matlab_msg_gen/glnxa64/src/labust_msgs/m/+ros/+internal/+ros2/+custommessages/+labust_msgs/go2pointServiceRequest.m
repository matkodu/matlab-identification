function [data, info] = go2pointServiceRequest
%Go2pointService gives an empty data for labust_msgs/Go2pointServiceRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/Go2pointServiceRequest';
[data.point, info.point] = ros.internal.ros2.messages.geometry_msgs.point;
info.point.MLdataType = 'struct';
[data.speed, info.speed] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
info.MessageType = 'labust_msgs/Go2pointServiceRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'point';
info.MatPath{2} = 'point.x';
info.MatPath{3} = 'point.y';
info.MatPath{4} = 'point.z';
info.MatPath{5} = 'speed';
