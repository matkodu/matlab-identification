function ros1msg = labust_msgs_msg_GoalDescriptor_2To1_Converter(message,ros1msg)
%labust_msgs_msg_GoalDescriptor_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Requester = message.requester{1};
ros1msg.Id = message.id;
ros1msg.Priority = message.priority;
end