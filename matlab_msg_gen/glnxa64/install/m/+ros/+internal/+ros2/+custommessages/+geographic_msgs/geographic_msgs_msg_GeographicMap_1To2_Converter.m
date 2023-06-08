function ros2msg = geographic_msgs_msg_GeographicMap_1To2_Converter(message,ros2msg)
%geographic_msgs_msg_GeographicMap_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.id.uuid = message.Id.Uuid;
ros2msg.bounds.min_pt.latitude = message.Bounds.MinPt.Latitude;
ros2msg.bounds.min_pt.longitude = message.Bounds.MinPt.Longitude;
ros2msg.bounds.min_pt.altitude = message.Bounds.MinPt.Altitude;
ros2msg.bounds.max_pt.latitude = message.Bounds.MaxPt.Latitude;
ros2msg.bounds.max_pt.longitude = message.Bounds.MaxPt.Longitude;
ros2msg.bounds.max_pt.altitude = message.Bounds.MaxPt.Altitude;
ros2msg.points.id.uuid = message.Points.Id.Uuid;
ros2msg.points.position.latitude = message.Points.Position.Latitude;
ros2msg.points.position.longitude = message.Points.Position.Longitude;
ros2msg.points.position.altitude = message.Points.Position.Altitude;
ros2msg.points.props.key = message.Points.Props.Key;
ros2msg.points.props.value = message.Points.Props.Value;
ros2msg.features.id.uuid = message.Features.Id.Uuid;
ros2msg.features.components.uuid = message.Features.Components.Uuid;
ros2msg.features.props.key = message.Features.Props.Key;
ros2msg.features.props.value = message.Features.Props.Value;
ros2msg.props.key = message.Props.Key;
ros2msg.props.value = message.Props.Value;
end