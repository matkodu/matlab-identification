function [data, info] = goToPointFeedback
%GoToPointFeedback gives an empty data for labust_msgs/GoToPointFeedback
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/GoToPointFeedback';
[data.distance, info.distance] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.bearing, info.bearing] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'labust_msgs/GoToPointFeedback';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'distance';
info.MatPath{2} = 'bearing';
