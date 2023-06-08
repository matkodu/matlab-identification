function ros1msg = labust_msgs_msg_SendPrimitive_2To1_Converter(message,ros1msg)
%labust_msgs_msg_SendPrimitive_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.PrimitiveId = message.primitive_id;
ros1msg.Event.Timeout = message.event.timeout;
ros1msg.PrimitiveString.Data = message.primitive_string.data{1};
end