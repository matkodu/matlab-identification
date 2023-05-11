function F = pinv_alloc(tau)
B=[0.25, 0.25, -0.25, -0.25; -0.25,  0.25, -0.25,  0.25; -0.25, 0.25, 0.25, -0.25];
F = pinv(B)*tau;
end