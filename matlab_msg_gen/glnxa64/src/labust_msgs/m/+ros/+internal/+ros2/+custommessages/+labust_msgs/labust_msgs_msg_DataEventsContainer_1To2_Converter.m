function ros2msg = labust_msgs_msg_DataEventsContainer_1To2_Converter(message,ros2msg)
%labust_msgs_msg_DataEventsContainer_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.state_var.layout.dim.label = message.StateVar.Layout.Dim.Label;
ros2msg.state_var.layout.dim.size = message.StateVar.Layout.Dim.Size;
ros2msg.state_var.layout.dim.stride = message.StateVar.Layout.Dim.Stride;
ros2msg.state_var.layout.data_offset = message.StateVar.Layout.DataOffset;
ros2msg.mission_var.layout.dim.label = message.MissionVar.Layout.Dim.Label;
ros2msg.mission_var.layout.dim.size = message.MissionVar.Layout.Dim.Size;
ros2msg.mission_var.layout.dim.stride = message.MissionVar.Layout.Dim.Stride;
ros2msg.mission_var.layout.data_offset = message.MissionVar.Layout.DataOffset;
end