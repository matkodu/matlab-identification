function ros2msg = labust_msgs_msg_CourseKeepingUA_1To2_Converter(message,ros2msg)
%labust_msgs_msg_CourseKeepingUA_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.course = message.Course;
ros2msg.speed = message.Speed;
end