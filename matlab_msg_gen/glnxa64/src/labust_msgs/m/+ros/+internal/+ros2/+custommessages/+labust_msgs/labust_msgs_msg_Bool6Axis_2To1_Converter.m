function ros1msg = labust_msgs_msg_Bool6Axis_2To1_Converter(message,ros1msg)
%labust_msgs_msg_Bool6Axis_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.X = message.x;
ros1msg.Y = message.y;
ros1msg.Z = message.z;
ros1msg.Roll = message.roll;
ros1msg.Pitch = message.pitch;
ros1msg.Yaw = message.yaw;
end