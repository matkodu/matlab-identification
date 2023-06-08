function ros1msg = auv_msgs_msg_VehiclePoseArray_2To1_Converter(message,ros1msg)
%auv_msgs_msg_VehiclePoseArray_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Poses.Id = message.poses.id{1};
ros1msg.Poses.Position.North = message.poses.position.north;
ros1msg.Poses.Position.East = message.poses.position.east;
ros1msg.Poses.Position.Depth = message.poses.position.depth;
ros1msg.Poses.Orientation.X = message.poses.orientation.x;
ros1msg.Poses.Orientation.Y = message.poses.orientation.y;
ros1msg.Poses.Orientation.Z = message.poses.orientation.z;
end