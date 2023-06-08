function [data, info] = manualConfigureResponse
%ManualConfigure gives an empty data for labust_msgs/ManualConfigureResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'labust_msgs/ManualConfigureResponse';
[data.current_configuration, info.current_configuration] = ros.internal.ros2.custommessages.labust_msgs.manualConfiguration;
info.current_configuration.MLdataType = 'struct';
info.MessageType = 'labust_msgs/ManualConfigureResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,17);
info.MatPath{1} = 'current_configuration';
info.MatPath{2} = 'current_configuration.DISABLED';
info.MatPath{3} = 'current_configuration.X';
info.MatPath{4} = 'current_configuration.Y';
info.MatPath{5} = 'current_configuration.Z';
info.MatPath{6} = 'current_configuration.K';
info.MatPath{7} = 'current_configuration.M';
info.MatPath{8} = 'current_configuration.N';
info.MatPath{9} = 'current_configuration.axes_map';
info.MatPath{10} = 'current_configuration.scale_map';
info.MatPath{11} = 'current_configuration.integrated';
info.MatPath{12} = 'current_configuration.maximum_effort';
info.MatPath{13} = 'current_configuration.maximum_nu';
info.MatPath{14} = 'current_configuration.maximum_speed';
info.MatPath{15} = 'current_configuration.sampling_time';
info.MatPath{16} = 'current_configuration.use_ff';
info.MatPath{17} = 'current_configuration.topic';
