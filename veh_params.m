
vehicle = 'vis';


h2omnix_joy_topic = ['/', vehicle, '/joy_node'];



active_model = ['h2omnix_manual'];

[subs, pubs] = getRosAgentsFromModel(active_model);

for i=1:length(subs)
    s = subs{i};
    a = get_param(s, 'topic');
end