function [subs, pubs] = getRosAgentsFromModel(model)

    subs = {};
    pubs = {};
    opts = Simulink.FindOptions;
    opts.FollowLinks = 1;
    names = getfullname(Simulink.findBlocks(model, opts));
    for i=1:length(names)
        name = names{i};
        if strcmp(get_param(name, 'MaskType'), 'ROS2 Subscribe')
            subs{end+1} = name;
        end
        if strcmp(get_param(name, 'MaskType'), 'ROS2 Publish')
            pubs{end+1} = name;
        end
    end
    
end

