function ros1msg = labust_msgs_msg_EventData_2To1_Converter(message,ros1msg)
%labust_msgs_msg_EventData_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Timeout = message.timeout;
end