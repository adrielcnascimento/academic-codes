% Equation of Best Fit for Diode Data
% Diode parameters
vt = 25.67e-3;
vd =  [0.1 0.2  0.3  0.4  0.5  0.6  0.7];
id = [1.33e-13  1.79e-12  24.02e-12  ... 
      0.321e-9  4.31e-9  57.69e-9  7.72e-7]; %
lnid = log(id);		% Natural log of current
% Determine coefficients
pfit = polyfit (vd, lnid, 1);	% curve fitting
% Linear equation is y= mx + b
b = pfit(2);
m = pfit(1);
ifit = m*vd + b;
% Calculate current when diod voltage is 0.64 V
Ix = m*0.58 + b;
I_58v = exp(Ix);
% Plot v versys ln(i) and best fit linear model
plot(vd, ifit, 'b', vd, lnid, 'ob')
xlabel ('Voltage, V')
ylabel ('ln(i), A')
title ('Best Fit Linear Model')
fprintf('Diode current for voltage of 0.58V is %9.3e\n', I_58v)