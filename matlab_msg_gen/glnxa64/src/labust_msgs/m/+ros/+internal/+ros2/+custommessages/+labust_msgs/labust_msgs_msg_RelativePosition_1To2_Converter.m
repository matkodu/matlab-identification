function ros2msg = labust_msgs_msg_RelativePosition_1To2_Converter(message,ros2msg)
%labust_msgs_msg_RelativePosition_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.x = message.X;
ros2msg.y = message.Y;
ros2msg.x_variance = message.XVariance;
ros2msg.y_variance = message.YVariance;
ros2msg.range = message.Range;
ros2msg.bearing = message.Bearing;
ros2msg.range_variance = message.RangeVariance;
ros2msg.bearing_variance = message.BearingVariance;
ros2msg.altitude = message.Altitude;
ros2msg.altitude_variance = message.AltitudeVariance;
ros2msg.heading = message.Heading;
end