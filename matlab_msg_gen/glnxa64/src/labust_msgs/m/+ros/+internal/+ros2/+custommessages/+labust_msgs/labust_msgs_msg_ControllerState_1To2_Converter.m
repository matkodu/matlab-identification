function ros2msg = labust_msgs_msg_ControllerState_1To2_Converter(message,ros2msg)
%labust_msgs_msg_ControllerState_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.name = message.Name;
ros2msg.info.manual_topic = message.Info.ManualTopic;
ros2msg.info.external_topic = message.Info.ExternalTopic;
ros2msg.info.state_topic = message.Info.StateTopic;
ros2msg.info.tracking_topic = message.Info.TrackingTopic;
ros2msg.info.state = message.Info.State;
end