function ros2msg = labust_msgs_msg_SendPrimitive_1To2_Converter(message,ros2msg)
%labust_msgs_msg_SendPrimitive_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.primitive_id = message.PrimitiveId;
ros2msg.event.timeout = message.Event.Timeout;
ros2msg.primitive_string.data = message.PrimitiveString.Data;
end