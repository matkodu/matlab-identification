function ros1msg = geographic_msgs_msg_GeographicMap_2To1_Converter(message,ros1msg)
%geographic_msgs_msg_GeographicMap_2To1_Converter passes data of ROS 2 message to ROS message.
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
ros1msg.Features.Id.Uuid = message.features.id.uuid;
ros1msg.Features.Components.Uuid = message.features.components.uuid;
ros1msg.Features.Props.Key = message.features.props.key{1};
ros1msg.Features.Props.Value = message.features.props.value{1};
ros1msg.Props.Key = message.props.key{1};
ros1msg.Props.Value = message.props.value{1};
end