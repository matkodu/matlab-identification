function ros2msg = geographic_msgs_msg_WayPoint_1To2_Converter(message,ros2msg)
%geographic_msgs_msg_WayPoint_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.id.uuid = message.Id.Uuid;
ros2msg.position.latitude = message.Position.Latitude;
ros2msg.position.longitude = message.Position.Longitude;
ros2msg.position.altitude = message.Position.Altitude;
ros2msg.props.key = message.Props.Key;
ros2msg.props.value = message.Props.Value;
end