function ros2msg = labust_msgs_msg_GoalDescriptor_1To2_Converter(message,ros2msg)
%labust_msgs_msg_GoalDescriptor_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.requester = message.Requester;
ros2msg.id = message.Id;
ros2msg.priority = message.Priority;
end