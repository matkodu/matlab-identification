function ros1msg = labust_msgs_msg_StartNeptusParser_2To1_Converter(message,ros1msg)
%labust_msgs_msg_StartNeptusParser_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.FileName = message.file_name{1};
ros1msg.Relative = message.relative;
ros1msg.CustomStartFlag = message.custom_start_flag;
ros1msg.Origin.Latitude = message.origin.latitude;
ros1msg.Origin.Longitude = message.origin.longitude;
ros1msg.Origin.Altitude = message.origin.altitude;
ros1msg.CustomStart.Latitude = message.custom_start.latitude;
ros1msg.CustomStart.Longitude = message.custom_start.longitude;
ros1msg.CustomStart.Altitude = message.custom_start.altitude;
ros1msg.Underactuated = message.underactuated;
ros1msg.Speed = message.speed;
ros1msg.Heading = message.heading;
ros1msg.VictoryRadius = message.victory_radius;
end