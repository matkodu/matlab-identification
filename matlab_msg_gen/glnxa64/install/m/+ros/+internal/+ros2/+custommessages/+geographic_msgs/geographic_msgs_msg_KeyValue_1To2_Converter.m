function ros2msg = geographic_msgs_msg_KeyValue_1To2_Converter(message,ros2msg)
%geographic_msgs_msg_KeyValue_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.key = message.Key;
ros2msg.value = message.Value;
end