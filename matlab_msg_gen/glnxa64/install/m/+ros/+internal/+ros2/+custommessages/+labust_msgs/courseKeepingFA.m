function [data, info] = courseKeepingFA
%CourseKeepingFA gives an empty data for labust_msgs/CourseKeepingFA
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/CourseKeepingFA';
[data.course, info.course] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.heading, info.heading] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.speed, info.speed] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'labust_msgs/CourseKeepingFA';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'course';
info.MatPath{2} = 'heading';
info.MatPath{3} = 'speed';
