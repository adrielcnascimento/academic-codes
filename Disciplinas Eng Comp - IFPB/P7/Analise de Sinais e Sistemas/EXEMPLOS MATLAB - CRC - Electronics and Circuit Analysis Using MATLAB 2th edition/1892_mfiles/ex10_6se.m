% Junction potential versus source voltage
% using equation(10.37) contact potential is

t = 300; 
na = 1.0e17; 
nd = 1.0e14; 
nisq = 1.04e20;
q = 1.602e-19; 
k = 1.38e-23;

% calculate contact potential
vc = (k*t/q)*(log(na*nd/nisq))
vs = -1.0:0.1:0.7;
jct_pot = vc - vs;

% plot curve
plot(vs, jct_pot,'b', vs,jct_pot,'ob')
title('Junction Potential vs. Source Voltage')
xlabel('Source Voltage, V')
ylabel('Junction Potential, V')