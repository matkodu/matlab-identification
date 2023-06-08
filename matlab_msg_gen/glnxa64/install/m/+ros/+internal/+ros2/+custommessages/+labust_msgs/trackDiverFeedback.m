function [data, info] = trackDiverFeedback
%TrackDiverFeedback gives an empty data for labust_msgs/TrackDiverFeedback
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/TrackDiverFeedback';
[data.mu_r, info.mu_r] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.gamma_r, info.gamma_r] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.operational_radius, info.operational_radius] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.delta_r, info.delta_r] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.zeta_r, info.zeta_r] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.ned_tracking_error, info.ned_tracking_error] = ros.internal.ros2.messages.geometry_msgs.vector3;
info.ned_tracking_error.MLdataType = 'struct';
info.MessageType = 'labust_msgs/TrackDiverFeedback';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,9);
info.MatPath{1} = 'mu_r';
info.MatPath{2} = 'gamma_r';
info.MatPath{3} = 'operational_radius';
info.MatPath{4} = 'delta_r';
info.MatPath{5} = 'zeta_r';
info.MatPath{6} = 'ned_tracking_error';
info.MatPath{7} = 'ned_tracking_error.x';
info.MatPath{8} = 'ned_tracking_error.y';
info.MatPath{9} = 'ned_tracking_error.z';
