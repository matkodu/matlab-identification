function ros1msg = labust_msgs_msg_ExternalEvent_2To1_Converter(message,ros1msg)
%labust_msgs_msg_ExternalEvent_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Id = message.id;
ros1msg.Description = message.description{1};
ros1msg.Value = message.value;
end