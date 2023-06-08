function [data, info] = vehiclePose
%VehiclePose gives an empty data for auv_msgs/VehiclePose
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'auv_msgs/VehiclePose';
[data.id, info.id] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.position, info.position] = ros.internal.ros2.custommessages.auv_msgs.nED;
info.position.MLdataType = 'struct';
[data.orientation, info.orientation] = ros.internal.ros2.messages.geometry_msgs.vector3;
info.orientation.MLdataType = 'struct';
info.MessageType = 'auv_msgs/VehiclePose';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,9);
info.MatPath{1} = 'id';
info.MatPath{2} = 'position';
info.MatPath{3} = 'position.north';
info.MatPath{4} = 'position.east';
info.MatPath{5} = 'position.depth';
info.MatPath{6} = 'orientation';
info.MatPath{7} = 'orientation.x';
info.MatPath{8} = 'orientation.y';
info.MatPath{9} = 'orientation.z';
