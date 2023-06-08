function [data, info] = lawnmoverServiceRequest
%LawnmoverService gives an empty data for labust_msgs/LawnmoverServiceRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/LawnmoverServiceRequest';
[data.width, info.width] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.length, info.length] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.start_position, info.start_position] = ros.internal.ros2.messages.geometry_msgs.point;
info.start_position.MLdataType = 'struct';
[data.speed, info.speed] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.victory_radius, info.victory_radius] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.horizontal_step, info.horizontal_step] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.bearing, info.bearing] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'labust_msgs/LawnmoverServiceRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,10);
info.MatPath{1} = 'width';
info.MatPath{2} = 'length';
info.MatPath{3} = 'start_position';
info.MatPath{4} = 'start_position.x';
info.MatPath{5} = 'start_position.y';
info.MatPath{6} = 'start_position.z';
info.MatPath{7} = 'speed';
info.MatPath{8} = 'victory_radius';
info.MatPath{9} = 'horizontal_step';
info.MatPath{10} = 'bearing';
