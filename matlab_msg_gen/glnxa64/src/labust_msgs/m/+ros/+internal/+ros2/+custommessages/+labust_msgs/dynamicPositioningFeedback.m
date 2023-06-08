function [data, info] = dynamicPositioningFeedback
%DynamicPositioningFeedback gives an empty data for labust_msgs/DynamicPositioningFeedback
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/DynamicPositioningFeedback';
[data.error, info.error] = ros.internal.ros2.messages.geometry_msgs.pointStamped;
info.error.MLdataType = 'struct';
[data.distance, info.distance] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.bearing, info.bearing] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'labust_msgs/DynamicPositioningFeedback';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,12);
info.MatPath{1} = 'error';
info.MatPath{2} = 'error.header';
info.MatPath{3} = 'error.header.stamp';
info.MatPath{4} = 'error.header.stamp.sec';
info.MatPath{5} = 'error.header.stamp.nanosec';
info.MatPath{6} = 'error.header.frame_id';
info.MatPath{7} = 'error.point';
info.MatPath{8} = 'error.point.x';
info.MatPath{9} = 'error.point.y';
info.MatPath{10} = 'error.point.z';
info.MatPath{11} = 'distance';
info.MatPath{12} = 'bearing';
