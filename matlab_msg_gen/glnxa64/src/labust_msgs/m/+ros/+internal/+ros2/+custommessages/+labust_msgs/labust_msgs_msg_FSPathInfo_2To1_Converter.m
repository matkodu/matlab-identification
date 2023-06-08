function ros1msg = labust_msgs_msg_FSPathInfo_2To1_Converter(message,ros1msg)
%labust_msgs_msg_FSPathInfo_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.DeltaR = message.delta_r;
ros1msg.K = message.k;
ros1msg.XiR = message.xi_r;
ros1msg.DxiR = message.dxi_r;
ros1msg.Pi = message.pi;
ros1msg.PiTilda = message.pi_tilda;
ros1msg.DrP.X = message.dr_p.x;
ros1msg.DrP.Y = message.dr_p.y;
ros1msg.DrP.Z = message.dr_p.z;
ros1msg.Position.X = message.position.x;
ros1msg.Position.Y = message.position.y;
ros1msg.Position.Z = message.position.z;
ros1msg.Orientation.Roll = message.orientation.roll;
ros1msg.Orientation.Pitch = message.orientation.pitch;
ros1msg.Orientation.Yaw = message.orientation.yaw;
ros1msg.Curvature = message.curvature;
ros1msg.Torsion = message.torsion;
end