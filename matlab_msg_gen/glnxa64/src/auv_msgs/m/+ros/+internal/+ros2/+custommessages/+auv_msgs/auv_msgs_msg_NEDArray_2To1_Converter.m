function ros1msg = auv_msgs_msg_NEDArray_2To1_Converter(message,ros1msg)
%auv_msgs_msg_NEDArray_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Neds.North = message.neds.north;
ros1msg.Neds.East = message.neds.east;
ros1msg.Neds.Depth = message.neds.depth;
end