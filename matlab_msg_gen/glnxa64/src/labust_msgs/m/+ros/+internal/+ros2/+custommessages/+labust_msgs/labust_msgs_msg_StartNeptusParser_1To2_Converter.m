function ros2msg = labust_msgs_msg_StartNeptusParser_1To2_Converter(message,ros2msg)
%labust_msgs_msg_StartNeptusParser_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.file_name = message.FileName;
ros2msg.relative = message.Relative;
ros2msg.custom_start_flag = message.CustomStartFlag;
ros2msg.origin.latitude = message.Origin.Latitude;
ros2msg.origin.longitude = message.Origin.Longitude;
ros2msg.origin.altitude = message.Origin.Altitude;
ros2msg.custom_start.latitude = message.CustomStart.Latitude;
ros2msg.custom_start.longitude = message.CustomStart.Longitude;
ros2msg.custom_start.altitude = message.CustomStart.Altitude;
ros2msg.underactuated = message.Underactuated;
ros2msg.speed = message.Speed;
ros2msg.heading = message.Heading;
ros2msg.victory_radius = message.VictoryRadius;
end