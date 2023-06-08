function [data, info] = geoPoint
%GeoPoint gives an empty data for geographic_msgs/GeoPoint
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'geographic_msgs/GeoPoint';
[data.latitude, info.latitude] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.longitude, info.longitude] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.altitude, info.altitude] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
info.MessageType = 'geographic_msgs/GeoPoint';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'latitude';
info.MatPath{2} = 'longitude';
info.MatPath{3} = 'altitude';
