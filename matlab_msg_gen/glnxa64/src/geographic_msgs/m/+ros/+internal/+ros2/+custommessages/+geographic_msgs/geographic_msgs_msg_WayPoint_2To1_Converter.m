function ros1msg = geographic_msgs_msg_WayPoint_2To1_Converter(message,ros1msg)
%geographic_msgs_msg_WayPoint_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Id.Uuid = message.id.uuid;
ros1msg.Position.Latitude = message.position.latitude;
ros1msg.Position.Longitude = message.position.longitude;
ros1msg.Position.Altitude = message.position.altitude;
ros1msg.Props.Key = message.props.key{1};
ros1msg.Props.Value = message.props.value{1};
end