function ros2msg = labust_msgs_msg_ControllerInfo_1To2_Converter(message,ros2msg)
%labust_msgs_msg_ControllerInfo_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.manual_topic = message.ManualTopic;
ros2msg.external_topic = message.ExternalTopic;
ros2msg.state_topic = message.StateTopic;
ros2msg.tracking_topic = message.TrackingTopic;
ros2msg.state = message.State;
end