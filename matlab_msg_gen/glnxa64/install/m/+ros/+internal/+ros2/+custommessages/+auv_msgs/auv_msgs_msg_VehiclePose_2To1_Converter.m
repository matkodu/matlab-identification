function ros1msg = auv_msgs_msg_VehiclePose_2To1_Converter(message,ros1msg)
%auv_msgs_msg_VehiclePose_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Id = message.id{1};
ros1msg.Position.North = message.position.north;
ros1msg.Position.East = message.position.east;
ros1msg.Position.Depth = message.position.depth;
ros1msg.Orientation.X = message.orientation.x;
ros1msg.Orientation.Y = message.orientation.y;
ros1msg.Orientation.Z = message.orientation.z;
end