function ros2msg = auv_msgs_msg_NEDArray_1To2_Converter(message,ros2msg)
%auv_msgs_msg_NEDArray_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.neds.north = message.Neds.North;
ros2msg.neds.east = message.Neds.East;
ros2msg.neds.depth = message.Neds.Depth;
end