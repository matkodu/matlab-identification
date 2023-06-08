function [data, info] = geoPose
%GeoPose gives an empty data for geographic_msgs/GeoPose
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'geographic_msgs/GeoPose';
[data.position, info.position] = ros.internal.ros2.custommessages.geographic_msgs.geoPoint;
info.position.MLdataType = 'struct';
[data.orientation, info.orientation] = ros.internal.ros2.messages.geometry_msgs.quaternion;
info.orientation.MLdataType = 'struct';
info.MessageType = 'geographic_msgs/GeoPose';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,9);
info.MatPath{1} = 'position';
info.MatPath{2} = 'position.latitude';
info.MatPath{3} = 'position.longitude';
info.MatPath{4} = 'position.altitude';
info.MatPath{5} = 'orientation';
info.MatPath{6} = 'orientation.x';
info.MatPath{7} = 'orientation.y';
info.MatPath{8} = 'orientation.z';
info.MatPath{9} = 'orientation.w';
