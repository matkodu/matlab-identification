uint8 SINGLE = 0
uint8 SAME_PARENT = 1
uint8 ALL = 2

# Type of un-registration
# 0 - single controller
# 1 - controller with same parents
# 2 - all controllers
uint8 type
# Parent name - for multi-controller nodes
string parent
# Controller unique name
string name
