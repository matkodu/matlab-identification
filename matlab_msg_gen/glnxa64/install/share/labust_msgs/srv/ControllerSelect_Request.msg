# The controller must not publish anything when disabled
uint8 DISABLED = 0
# The controller takes the manual reference input
uint8 MANUAL = 1
# The controller takes the external set-point reference (or higher level control input)
uint8 EXTERNAL = 2
# The controller has passive tracking of output - preferred over DISABLE during idle operation
uint8 TRACKING = 3

# The activation shortcut state name
uint8 ACTIVATE = 2
# The deactivation shortcut state name
uint8 DEACTIVATE = 3

string[] name # List of controller names
int32[] state # List of enable/disable actions
