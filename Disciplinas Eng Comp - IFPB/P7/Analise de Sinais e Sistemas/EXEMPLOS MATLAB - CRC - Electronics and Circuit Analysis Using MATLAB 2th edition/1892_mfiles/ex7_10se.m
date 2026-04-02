% Transmission parameters of cascaded resistive network
a1 = [3 2; 1 1];
a2 = [3 4; 0.5 1];
a3 = [3 8; 0.25 1];
a4 = [3 16; 0.125 1];
% equivalent transmission parameters
a = a1*(a2*(a3*a4))