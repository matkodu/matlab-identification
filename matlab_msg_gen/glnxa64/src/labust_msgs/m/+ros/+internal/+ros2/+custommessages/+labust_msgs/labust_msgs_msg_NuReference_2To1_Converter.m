function ros1msg = labust_msgs_msg_NuReference_2To1_Converter(message,ros1msg)
%labust_msgs_msg_NuReference_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.IdentityToken = message.identity_token{1};
ros1msg.Reference.Linear.X = message.reference.linear.x;
ros1msg.Reference.Linear.Y = message.reference.linear.y;
ros1msg.Reference.Linear.Z = message.reference.linear.z;
ros1msg.Reference.Angular.X = message.reference.angular.x;
ros1msg.Reference.Angular.Y = message.reference.angular.y;
ros1msg.Reference.Angular.Z = message.reference.angular.z;
end