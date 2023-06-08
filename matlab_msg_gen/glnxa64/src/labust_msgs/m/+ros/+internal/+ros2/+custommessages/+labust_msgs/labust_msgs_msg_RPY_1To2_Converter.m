function ros2msg = labust_msgs_msg_RPY_1To2_Converter(message,ros2msg)
%labust_msgs_msg_RPY_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.roll = message.Roll;
ros2msg.pitch = message.Pitch;
ros2msg.yaw = message.Yaw;
end