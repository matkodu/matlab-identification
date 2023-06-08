function ros1msg = geographic_msgs_msg_KeyValue_2To1_Converter(message,ros1msg)
%geographic_msgs_msg_KeyValue_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Key = message.key{1};
ros1msg.Value = message.value{1};
end