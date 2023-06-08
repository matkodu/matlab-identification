function ros2msg = auv_msgs_msg_VehiclePoseArray_1To2_Converter(message,ros2msg)
%auv_msgs_msg_VehiclePoseArray_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.poses.id = message.Poses.Id;
ros2msg.poses.position.north = message.Poses.Position.North;
ros2msg.poses.position.east = message.Poses.Position.East;
ros2msg.poses.position.depth = message.Poses.Position.Depth;
ros2msg.poses.orientation.x = message.Poses.Orientation.X;
ros2msg.poses.orientation.y = message.Poses.Orientation.Y;
ros2msg.poses.orientation.z = message.Poses.Orientation.Z;
end