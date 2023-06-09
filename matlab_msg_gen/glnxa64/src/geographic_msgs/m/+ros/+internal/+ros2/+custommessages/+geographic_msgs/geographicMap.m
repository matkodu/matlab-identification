function [data, info] = geographicMap
%GeographicMap gives an empty data for geographic_msgs/GeographicMap
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'geographic_msgs/GeographicMap';
[data.header, info.header] = ros.internal.ros2.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.id, info.id] = ros.internal.ros2.messages.unique_identifier_msgs.uUID;
info.id.MLdataType = 'struct';
[data.bounds, info.bounds] = ros.internal.ros2.custommessages.geographic_msgs.boundingBox;
info.bounds.MLdataType = 'struct';
[data.points, info.points] = ros.internal.ros2.custommessages.geographic_msgs.wayPoint;
info.points.MLdataType = 'struct';
info.points.MaxLen = NaN;
info.points.MinLen = 0;
[data.features, info.features] = ros.internal.ros2.custommessages.geographic_msgs.mapFeature;
info.features.MLdataType = 'struct';
info.features.MaxLen = NaN;
info.features.MinLen = 0;
[data.props, info.props] = ros.internal.ros2.custommessages.geographic_msgs.keyValue;
info.props.MLdataType = 'struct';
info.props.MaxLen = NaN;
info.props.MinLen = 0;
info.MessageType = 'geographic_msgs/GeographicMap';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,37);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.stamp';
info.MatPath{3} = 'header.stamp.sec';
info.MatPath{4} = 'header.stamp.nanosec';
info.MatPath{5} = 'header.frame_id';
info.MatPath{6} = 'id';
info.MatPath{7} = 'id.uuid';
info.MatPath{8} = 'bounds';
info.MatPath{9} = 'bounds.min_pt';
info.MatPath{10} = 'bounds.min_pt.latitude';
info.MatPath{11} = 'bounds.min_pt.longitude';
info.MatPath{12} = 'bounds.min_pt.altitude';
info.MatPath{13} = 'bounds.max_pt';
info.MatPath{14} = 'bounds.max_pt.latitude';
info.MatPath{15} = 'bounds.max_pt.longitude';
info.MatPath{16} = 'bounds.max_pt.altitude';
info.MatPath{17} = 'points';
info.MatPath{18} = 'points.id';
info.MatPath{19} = 'points.id.uuid';
info.MatPath{20} = 'points.position';
info.MatPath{21} = 'points.position.latitude';
info.MatPath{22} = 'points.position.longitude';
info.MatPath{23} = 'points.position.altitude';
info.MatPath{24} = 'points.props';
info.MatPath{25} = 'points.props.key';
info.MatPath{26} = 'points.props.value';
info.MatPath{27} = 'features';
info.MatPath{28} = 'features.id';
info.MatPath{29} = 'features.id.uuid';
info.MatPath{30} = 'features.components';
info.MatPath{31} = 'features.components.uuid';
info.MatPath{32} = 'features.props';
info.MatPath{33} = 'features.props.key';
info.MatPath{34} = 'features.props.value';
info.MatPath{35} = 'props';
info.MatPath{36} = 'props.key';
info.MatPath{37} = 'props.value';
