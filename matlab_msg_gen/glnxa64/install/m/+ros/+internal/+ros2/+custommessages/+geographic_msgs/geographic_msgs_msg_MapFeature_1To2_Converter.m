function ros2msg = geographic_msgs_msg_MapFeature_1To2_Converter(message,ros2msg)
%geographic_msgs_msg_MapFeature_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.id.uuid = message.Id.Uuid;
ros2msg.components.uuid = message.Components.Uuid;
ros2msg.props.key = message.Props.Key;
ros2msg.props.value = message.Props.Value;
end