function [data, info] = courseKeepingFeedback
%CourseKeepingFeedback gives an empty data for labust_msgs/CourseKeepingFeedback
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/CourseKeepingFeedback';
[data.feedback, info.feedback] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
info.MessageType = 'labust_msgs/CourseKeepingFeedback';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'feedback';
