function ros2msg = labust_msgs_msg_FSPathInfo_1To2_Converter(message,ros2msg)
%labust_msgs_msg_FSPathInfo_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.delta_r = message.DeltaR;
ros2msg.k = message.K;
ros2msg.xi_r = message.XiR;
ros2msg.dxi_r = message.DxiR;
ros2msg.pi = message.Pi;
ros2msg.pi_tilda = message.PiTilda;
ros2msg.dr_p.x = message.DrP.X;
ros2msg.dr_p.y = message.DrP.Y;
ros2msg.dr_p.z = message.DrP.Z;
ros2msg.position.x = message.Position.X;
ros2msg.position.y = message.Position.Y;
ros2msg.position.z = message.Position.Z;
ros2msg.orientation.roll = message.Orientation.Roll;
ros2msg.orientation.pitch = message.Orientation.Pitch;
ros2msg.orientation.yaw = message.Orientation.Yaw;
ros2msg.curvature = message.Curvature;
ros2msg.torsion = message.Torsion;
end