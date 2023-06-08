function [data, info] = bodyForceReq
%BodyForceReq gives an empty data for labust_msgs/BodyForceReq
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/BodyForceReq';
[data.header, info.header] = ros.internal.ros2.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.goal, info.goal] = ros.internal.ros2.custommessages.labust_msgs.goalDescriptor;
info.goal.MLdataType = 'struct';
[data.wrench, info.wrench] = ros.internal.ros2.messages.geometry_msgs.wrench;
info.wrench.MLdataType = 'struct';
[data.disable_axis, info.disable_axis] = ros.internal.ros2.custommessages.labust_msgs.bool6Axis;
info.disable_axis.MLdataType = 'struct';
[data.windup, info.windup] = ros.internal.ros2.custommessages.labust_msgs.windup6Axis;
info.windup.MLdataType = 'struct';
info.MessageType = 'labust_msgs/BodyForceReq';
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
info.MatPath{6} = 'goal';
info.MatPath{7} = 'goal.requester';
info.MatPath{8} = 'goal.id';
info.MatPath{9} = 'goal.priority';
info.MatPath{10} = 'goal.PRIORITY_LOW';
info.MatPath{11} = 'goal.PRIORITY_NORMAL';
info.MatPath{12} = 'goal.PRIORITY_AVOID_OBSTACLE';
info.MatPath{13} = 'goal.PRIORITY_EMERGENCY';
info.MatPath{14} = 'goal.PRIORITY_MANUAL_OVERRIDE';
info.MatPath{15} = 'wrench';
info.MatPath{16} = 'wrench.force';
info.MatPath{17} = 'wrench.force.x';
info.MatPath{18} = 'wrench.force.y';
info.MatPath{19} = 'wrench.force.z';
info.MatPath{20} = 'wrench.torque';
info.MatPath{21} = 'wrench.torque.x';
info.MatPath{22} = 'wrench.torque.y';
info.MatPath{23} = 'wrench.torque.z';
info.MatPath{24} = 'disable_axis';
info.MatPath{25} = 'disable_axis.x';
info.MatPath{26} = 'disable_axis.y';
info.MatPath{27} = 'disable_axis.z';
info.MatPath{28} = 'disable_axis.roll';
info.MatPath{29} = 'disable_axis.pitch';
info.MatPath{30} = 'disable_axis.yaw';
info.MatPath{31} = 'windup';
info.MatPath{32} = 'windup.x';
info.MatPath{33} = 'windup.y';
info.MatPath{34} = 'windup.z';
info.MatPath{35} = 'windup.roll';
info.MatPath{36} = 'windup.pitch';
info.MatPath{37} = 'windup.yaw';