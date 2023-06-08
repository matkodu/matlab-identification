function ros1msg = labust_msgs_msg_RelativePosition_2To1_Converter(message,ros1msg)
%labust_msgs_msg_RelativePosition_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.X = message.x;
ros1msg.Y = message.y;
ros1msg.XVariance = message.x_variance;
ros1msg.YVariance = message.y_variance;
ros1msg.Range = message.range;
ros1msg.Bearing = message.bearing;
ros1msg.RangeVariance = message.range_variance;
ros1msg.BearingVariance = message.bearing_variance;
ros1msg.Altitude = message.altitude;
ros1msg.AltitudeVariance = message.altitude_variance;
ros1msg.Heading = message.heading;
end