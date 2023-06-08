function ros2msg = labust_msgs_msg_NuReference_1To2_Converter(message,ros2msg)
%labust_msgs_msg_NuReference_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.identity_token = message.IdentityToken;
ros2msg.reference.linear.x = message.Reference.Linear.X;
ros2msg.reference.linear.y = message.Reference.Linear.Y;
ros2msg.reference.linear.z = message.Reference.Linear.Z;
ros2msg.reference.angular.x = message.Reference.Angular.X;
ros2msg.reference.angular.y = message.Reference.Angular.Y;
ros2msg.reference.angular.z = message.Reference.Angular.Z;
end