function ros1msg = geographic_msgs_msg_GeographicMapChanges_2To1_Converter(message,ros1msg)
%geographic_msgs_msg_GeographicMapChanges_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Diffs.Header.Stamp.Sec = message.diffs.header.stamp.sec;
ros1msg.Diffs.Header.Stamp.Nsec = message.diffs.header.stamp.nanosec;
ros1msg.Diffs.Header.FrameId = message.diffs.header.frame_id{1};
ros1msg.Diffs.Id.Uuid = message.diffs.id.uuid;
ros1msg.Diffs.Bounds.MinPt.Latitude = message.diffs.bounds.min_pt.latitude;
ros1msg.Diffs.Bounds.MinPt.Longitude = message.diffs.bounds.min_pt.longitude;
ros1msg.Diffs.Bounds.MinPt.Altitude = message.diffs.bounds.min_pt.altitude;
ros1msg.Diffs.Bounds.MaxPt.Latitude = message.diffs.bounds.max_pt.latitude;
ros1msg.Diffs.Bounds.MaxPt.Longitude = message.diffs.bounds.max_pt.longitude;
ros1msg.Diffs.Bounds.MaxPt.Altitude = message.diffs.bounds.max_pt.altitude;
ros1msg.Diffs.Points.Id.Uuid = message.diffs.points.id.uuid;
ros1msg.Diffs.Points.Position.Latitude = message.diffs.points.position.latitude;
ros1msg.Diffs.Points.Position.Longitude = message.diffs.points.position.longitude;
ros1msg.Diffs.Points.Position.Altitude = message.diffs.points.position.altitude;
ros1msg.Diffs.Points.Props.Key = message.diffs.points.props.key{1};
ros1msg.Diffs.Points.Props.Value = message.diffs.points.props.value{1};
ros1msg.Diffs.Features.Id.Uuid = message.diffs.features.id.uuid;
ros1msg.Diffs.Features.Components.Uuid = message.diffs.features.components.uuid;
ros1msg.Diffs.Features.Props.Key = message.diffs.features.props.key{1};
ros1msg.Diffs.Features.Props.Value = message.diffs.features.props.value{1};
ros1msg.Diffs.Props.Key = message.diffs.props.key{1};
ros1msg.Diffs.Props.Value = message.diffs.props.value{1};
ros1msg.Deletes.Uuid = message.deletes.uuid;
end