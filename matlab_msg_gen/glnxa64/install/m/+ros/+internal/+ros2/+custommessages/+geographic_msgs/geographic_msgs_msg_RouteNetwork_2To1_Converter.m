function ros1msg = geographic_msgs_msg_RouteNetwork_2To1_Converter(message,ros1msg)
%geographic_msgs_msg_RouteNetwork_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Id.Uuid = message.id.uuid;
ros1msg.Bounds.MinPt.Latitude = message.bounds.min_pt.latitude;
ros1msg.Bounds.MinPt.Longitude = message.bounds.min_pt.longitude;
ros1msg.Bounds.MinPt.Altitude = message.bounds.min_pt.altitude;
ros1msg.Bounds.MaxPt.Latitude = message.bounds.max_pt.latitude;
ros1msg.Bounds.MaxPt.Longitude = message.bounds.max_pt.longitude;
ros1msg.Bounds.MaxPt.Altitude = message.bounds.max_pt.altitude;
ros1msg.Points.Id.Uuid = message.points.id.uuid;
ros1msg.Points.Position.Latitude = message.points.position.latitude;
ros1msg.Points.Position.Longitude = message.points.position.longitude;
ros1msg.Points.Position.Altitude = message.points.position.altitude;
ros1msg.Points.Props.Key = message.points.props.key{1};
ros1msg.Points.Props.Value = message.points.props.value{1};
ros1msg.Segments.Id.Uuid = message.segments.id.uuid;
ros1msg.Segments.Start.Uuid = message.segments.start.uuid;
ros1msg.Segments.End.Uuid = message.segments.end.uuid;
ros1msg.Segments.Props.Key = message.segments.props.key{1};
ros1msg.Segments.Props.Value = message.segments.props.value{1};
ros1msg.Props.Key = message.props.key{1};
ros1msg.Props.Value = message.props.value{1};
end