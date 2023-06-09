function [data, info] = navStsReq
%NavStsReq gives an empty data for labust_msgs/NavStsReq
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/NavStsReq';
[data.header, info.header] = ros.internal.ros2.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.global_position, info.global_position] = ros.internal.ros2.custommessages.geographic_msgs.geoPoint;
info.global_position.MLdataType = 'struct';
[data.origin, info.origin] = ros.internal.ros2.custommessages.geographic_msgs.geoPoint;
info.origin.MLdataType = 'struct';
[data.goal, info.goal] = ros.internal.ros2.custommessages.labust_msgs.goalDescriptor;
info.goal.MLdataType = 'struct';
[data.position, info.position] = ros.internal.ros2.custommessages.auv_msgs.nED;
info.position.MLdataType = 'struct';
[data.altitude, info.altitude] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.body_velocity, info.body_velocity] = ros.internal.ros2.messages.geometry_msgs.point;
info.body_velocity.MLdataType = 'struct';
[data.gbody_velocity, info.gbody_velocity] = ros.internal.ros2.messages.geometry_msgs.point;
info.gbody_velocity.MLdataType = 'struct';
[data.orientation, info.orientation] = ros.internal.ros2.custommessages.labust_msgs.rPY;
info.orientation.MLdataType = 'struct';
[data.orientation_rate, info.orientation_rate] = ros.internal.ros2.custommessages.labust_msgs.rPY;
info.orientation_rate.MLdataType = 'struct';
[data.position_tolerance, info.position_tolerance] = ros.internal.ros2.messages.geometry_msgs.vector3;
info.position_tolerance.MLdataType = 'struct';
[data.orientation_tolerance, info.orientation_tolerance] = ros.internal.ros2.custommessages.labust_msgs.rPY;
info.orientation_tolerance.MLdataType = 'struct';
[data.disable_axis, info.disable_axis] = ros.internal.ros2.custommessages.labust_msgs.bool6Axis;
info.disable_axis.MLdataType = 'struct';
info.MessageType = 'labust_msgs/NavStsReq';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,58);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.stamp';
info.MatPath{3} = 'header.stamp.sec';
info.MatPath{4} = 'header.stamp.nanosec';
info.MatPath{5} = 'header.frame_id';
info.MatPath{6} = 'global_position';
info.MatPath{7} = 'global_position.latitude';
info.MatPath{8} = 'global_position.longitude';
info.MatPath{9} = 'global_position.altitude';
info.MatPath{10} = 'origin';
info.MatPath{11} = 'origin.latitude';
info.MatPath{12} = 'origin.longitude';
info.MatPath{13} = 'origin.altitude';
info.MatPath{14} = 'goal';
info.MatPath{15} = 'goal.requester';
info.MatPath{16} = 'goal.id';
info.MatPath{17} = 'goal.priority';
info.MatPath{18} = 'goal.PRIORITY_LOW';
info.MatPath{19} = 'goal.PRIORITY_NORMAL';
info.MatPath{20} = 'goal.PRIORITY_AVOID_OBSTACLE';
info.MatPath{21} = 'goal.PRIORITY_EMERGENCY';
info.MatPath{22} = 'goal.PRIORITY_MANUAL_OVERRIDE';
info.MatPath{23} = 'position';
info.MatPath{24} = 'position.north';
info.MatPath{25} = 'position.east';
info.MatPath{26} = 'position.depth';
info.MatPath{27} = 'altitude';
info.MatPath{28} = 'body_velocity';
info.MatPath{29} = 'body_velocity.x';
info.MatPath{30} = 'body_velocity.y';
info.MatPath{31} = 'body_velocity.z';
info.MatPath{32} = 'gbody_velocity';
info.MatPath{33} = 'gbody_velocity.x';
info.MatPath{34} = 'gbody_velocity.y';
info.MatPath{35} = 'gbody_velocity.z';
info.MatPath{36} = 'orientation';
info.MatPath{37} = 'orientation.roll';
info.MatPath{38} = 'orientation.pitch';
info.MatPath{39} = 'orientation.yaw';
info.MatPath{40} = 'orientation_rate';
info.MatPath{41} = 'orientation_rate.roll';
info.MatPath{42} = 'orientation_rate.pitch';
info.MatPath{43} = 'orientation_rate.yaw';
info.MatPath{44} = 'position_tolerance';
info.MatPath{45} = 'position_tolerance.x';
info.MatPath{46} = 'position_tolerance.y';
info.MatPath{47} = 'position_tolerance.z';
info.MatPath{48} = 'orientation_tolerance';
info.MatPath{49} = 'orientation_tolerance.roll';
info.MatPath{50} = 'orientation_tolerance.pitch';
info.MatPath{51} = 'orientation_tolerance.yaw';
info.MatPath{52} = 'disable_axis';
info.MatPath{53} = 'disable_axis.x';
info.MatPath{54} = 'disable_axis.y';
info.MatPath{55} = 'disable_axis.z';
info.MatPath{56} = 'disable_axis.roll';
info.MatPath{57} = 'disable_axis.pitch';
info.MatPath{58} = 'disable_axis.yaw';
