# Get a plan to traverse a route network from start to goal.
#
# Similar to nav_msgs/GetPlan, but constrained to use the route network.

unique_identifier_msgs/UUID network      # route network to use
unique_identifier_msgs/UUID start        # starting way point
unique_identifier_msgs/UUID goal         # goal way point

