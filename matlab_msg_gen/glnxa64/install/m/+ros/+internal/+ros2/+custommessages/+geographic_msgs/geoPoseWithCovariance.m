function [data, info] = geoPoseWithCovariance
%GeoPoseWithCovariance gives an empty data for geographic_msgs/GeoPoseWithCovariance
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'geographic_msgs/GeoPoseWithCovariance';
[data.pose, info.pose] = ros.internal.ros2.custommessages.geographic_msgs.geoPose;
info.pose.MLdataType = 'struct';
[data.covariance, info.covariance] = ros.internal.ros2.messages.ros2.default_type('double',36,0);
info.MessageType = 'geographic_msgs/GeoPoseWithCovariance';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,11);
info.MatPath{1} = 'pose';
info.MatPath{2} = 'pose.position';
info.MatPath{3} = 'pose.position.latitude';
info.MatPath{4} = 'pose.position.longitude';
info.MatPath{5} = 'pose.position.altitude';
info.MatPath{6} = 'pose.orientation';
info.MatPath{7} = 'pose.orientation.x';
info.MatPath{8} = 'pose.orientation.y';
info.MatPath{9} = 'pose.orientation.z';
info.MatPath{10} = 'pose.orientation.w';
info.MatPath{11} = 'covariance';
