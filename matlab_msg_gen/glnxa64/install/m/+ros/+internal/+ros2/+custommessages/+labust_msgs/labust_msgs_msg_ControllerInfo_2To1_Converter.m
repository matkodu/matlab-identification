function ros1msg = labust_msgs_msg_ControllerInfo_2To1_Converter(message,ros1msg)
%labust_msgs_msg_ControllerInfo_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.ManualTopic = message.manual_topic{1};
ros1msg.ExternalTopic = message.external_topic{1};
ros1msg.StateTopic = message.state_topic{1};
ros1msg.TrackingTopic = message.tracking_topic{1};
ros1msg.State = message.state;
end