function ros1msg = labust_msgs_msg_ControllerState_2To1_Converter(message,ros1msg)
%labust_msgs_msg_ControllerState_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Name = message.name{1};
ros1msg.Info.ManualTopic = message.info.manual_topic{1};
ros1msg.Info.ExternalTopic = message.info.external_topic{1};
ros1msg.Info.StateTopic = message.info.state_topic{1};
ros1msg.Info.TrackingTopic = message.info.tracking_topic{1};
ros1msg.Info.State = message.info.state;
end