int32 X=1
int32 Y=2
int32 Z=4
int32 K=8
int32 M=16
int32 N=32

int32 MODEL_TF=0
int32 MODEL_SS=1

int32 model_type
int32 dof # Desired DOFs to identify
float32[] tf_num
float32[] tf_den

int32 ss_dim_n # state space dimension
int32 ss_dim_m # observation space dimension
float32[] ss_mat_a
float32[] ss_mat_b
float32[] ss_mat_c
float32[] ss_mat_d