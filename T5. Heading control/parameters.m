% Model parameters
alpha = [0.4,0.4,0.1]';
beta = [0.4,0.4,0.1]';

% Velocity control
% Velocity controller is I-P for surge, sway, yaw-rate
% We use the binomial model function to get the parameters
% Binomial model Gcl wpn for pose PD with binomial closed loop I-P
wpn = [1.2, 1.2, 1]';
pcKp = 4*wpn/9;
pcKd = 1/3;
wn = 3*wpn/2;

vcKi = alpha.*wn.^2;
vcKp = 2*alpha.*wn - beta;
vcKt = 1.2*vcKi./vcKp;

% Disable velocity controllers for surge and sway
disable = [1,1,1]';
pcKp = pcKp.*disable;
pcKd = pcKd.*disable;

vcKi = vcKi.*disable;
vcKp = vcKp.*disable;
vcKt = vcKt.*disable;

nu_max = [0.5,0.5,1]';
nu_min = -nu_max;