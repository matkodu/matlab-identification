function ros2msg = geographic_msgs_msg_GeographicMapChanges_1To2_Converter(message,ros2msg)
%geographic_msgs_msg_GeographicMapChanges_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.diffs.header.stamp.sec = message.Diffs.Header.Stamp.Sec;
ros2msg.diffs.header.stamp.nanosec = message.Diffs.Header.Stamp.Nsec;
ros2msg.diffs.header.frame_id = message.Diffs.Header.FrameId;
ros2msg.diffs.id.uuid = message.Diffs.Id.Uuid;
ros2msg.diffs.bounds.min_pt.latitude = message.Diffs.Bounds.MinPt.Latitude;
ros2msg.diffs.bounds.min_pt.longitude = message.Diffs.Bounds.MinPt.Longitude;
ros2msg.diffs.bounds.min_pt.altitude = message.Diffs.Bounds.MinPt.Altitude;
ros2msg.diffs.bounds.max_pt.latitude = message.Diffs.Bounds.MaxPt.Latitude;
ros2msg.diffs.bounds.max_pt.longitude = message.Diffs.Bounds.MaxPt.Longitude;
ros2msg.diffs.bounds.max_pt.altitude = message.Diffs.Bounds.MaxPt.Altitude;
ros2msg.diffs.points.id.uuid = message.Diffs.Points.Id.Uuid;
ros2msg.diffs.points.position.latitude = message.Diffs.Points.Position.Latitude;
ros2msg.diffs.points.position.longitude = message.Diffs.Points.Position.Longitude;
ros2msg.diffs.points.position.altitude = message.Diffs.Points.Position.Altitude;
ros2msg.diffs.points.props.key = message.Diffs.Points.Props.Key;
ros2msg.diffs.points.props.value = message.Diffs.Points.Props.Value;
ros2msg.diffs.features.id.uuid = message.Diffs.Features.Id.Uuid;
ros2msg.diffs.features.components.uuid = message.Diffs.Features.Components.Uuid;
ros2msg.diffs.features.props.key = message.Diffs.Features.Props.Key;
ros2msg.diffs.features.props.value = message.Diffs.Features.Props.Value;
ros2msg.diffs.props.key = message.Diffs.Props.Key;
ros2msg.diffs.props.value = message.Diffs.Props.Value;
ros2msg.deletes.uuid = message.Deletes.Uuid;
end