### The Frenet-Serret path command
std_msgs/Header header
## Yaw command
float64 delta_r
## Yaw slack
float64 k

## Path state variables
# Desired path position
float64 xi_r
# Derivative of the desired path position
float64 dxi_r
# Current path position
float64 pi
# Current path position error
float64 pi_tilda

# FS speed in NED
geometry_msgs/Point dr_p
## FS location and orientatino in NED
geometry_msgs/Point position
labust_msgs/RPY orientation


## Path information
# Path curvature
float64 curvature
# Path torsion
float64 torsion
