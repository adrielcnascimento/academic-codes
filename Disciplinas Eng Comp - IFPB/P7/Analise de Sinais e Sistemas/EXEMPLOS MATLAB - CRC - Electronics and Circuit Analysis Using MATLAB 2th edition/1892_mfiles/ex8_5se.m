% Power Calculation
% calculate coefficients of harmonics
c0 = 0.0;
for n = 1: 26
   c(n) = (4/pi)*(1/(2*n - 1));
end

% rms calculations
for n = 1: 26
   g1(n) = 0.5*(c(n)^2);
end

g2 = sum(g1)+ c0^2;
grms = sqrt(g2);

% Average Power Calculation
pwer = (grms^2)/4;
fprintf('The power dissipated in the resistor is %8.3f Watts\n',pwer)
