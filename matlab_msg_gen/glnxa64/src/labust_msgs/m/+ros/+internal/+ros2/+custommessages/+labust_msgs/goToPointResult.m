function [data, info] = goToPointResult
%GoToPointResult gives an empty data for labust_msgs/GoToPointResult
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/GoToPointResult';
[data.position, info.position] = ros.internal.ros2.messages.geometry_msgs.pointStamped;
info.position.MLdataType = 'struct';
[data.distance, info.distance] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.bearing, info.bearing] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'labust_msgs/GoToPointResult';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,12);
info.MatPath{1} = 'position';
info.MatPath{2} = 'position.header';
info.MatPath{3} = 'position.header.stamp';
info.MatPath{4} = 'position.header.stamp.sec';
info.MatPath{5} = 'position.header.stamp.nanosec';
info.MatPath{6} = 'position.header.frame_id';
info.MatPath{7} = 'position.point';
info.MatPath{8} = 'position.point.x';
info.MatPath{9} = 'position.point.y';
info.MatPath{10} = 'position.point.z';
info.MatPath{11} = 'distance';
info.MatPath{12} = 'bearing';
