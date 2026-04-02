% Example1.2
% Evaluation of Z
% the complex numbers are entered
Z1 = 5+6*j;
Z2 = 4-8*j;
Z3 = 9-2*j;
theta = (30/180)*pi;   % angle in radians
Z4 = 4*exp(j*theta);
Z_imp = (Z1*Z2/Z3)+Z4;
Z_mag = abs (Z_imp);   % magnitude of Z
Z_angle = angle(Z_imp)*(180/pi);  % Angle in degrees
disp('complex number Z in polar form, mag, phase');% displays text inside brackets
Z_polar = [Z_mag, Z_angle]
