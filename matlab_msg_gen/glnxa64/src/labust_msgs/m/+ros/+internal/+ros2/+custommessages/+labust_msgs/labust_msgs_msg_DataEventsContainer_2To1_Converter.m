function ros1msg = labust_msgs_msg_DataEventsContainer_2To1_Converter(message,ros1msg)
%labust_msgs_msg_DataEventsContainer_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.StateVar.Layout.Dim.Label = message.state_var.layout.dim.label{1};
ros1msg.StateVar.Layout.Dim.Size = message.state_var.layout.dim.size;
ros1msg.StateVar.Layout.Dim.Stride = message.state_var.layout.dim.stride;
ros1msg.StateVar.Layout.DataOffset = message.state_var.layout.data_offset;
ros1msg.MissionVar.Layout.Dim.Label = message.mission_var.layout.dim.label{1};
ros1msg.MissionVar.Layout.Dim.Size = message.mission_var.layout.dim.size;
ros1msg.MissionVar.Layout.Dim.Stride = message.mission_var.layout.dim.stride;
ros1msg.MissionVar.Layout.DataOffset = message.mission_var.layout.data_offset;
end