% Model parameters
alpha = [2.1,2.1,0.4]';
beta = [1,1,0.24]';

% Velocity control
% Velocity controller is I-P for surge, sway, yaw-rate
% We use the binomial model function to get the parameters
% Binomial model Gcl wpn for pose PD with binomial closed loop I-P
wpn = [2, 2, 3]';
pcKp = 4*wpn/9;
pcKd = 1/3;
wn = 3*wpn/2;

vcKi = alpha.*wn.^2;
vcKp = 2*alpha.*wn - beta;
vcKt = 1.2*vcKi./vcKp;

nu_max = [0.5,0.5,inf]';
nu_min = -nu_max;