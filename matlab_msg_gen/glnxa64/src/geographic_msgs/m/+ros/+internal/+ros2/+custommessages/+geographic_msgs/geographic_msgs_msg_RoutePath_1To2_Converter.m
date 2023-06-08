function ros2msg = geographic_msgs_msg_RoutePath_1To2_Converter(message,ros2msg)
%geographic_msgs_msg_RoutePath_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.network.uuid = message.Network.Uuid;
ros2msg.segments.uuid = message.Segments.Uuid;
ros2msg.props.key = message.Props.Key;
ros2msg.props.value = message.Props.Value;
end