function ros1msg = auv_msgs_msg_NED_2To1_Converter(message,ros1msg)
%auv_msgs_msg_NED_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.North = message.north;
ros1msg.East = message.east;
ros1msg.Depth = message.depth;
end