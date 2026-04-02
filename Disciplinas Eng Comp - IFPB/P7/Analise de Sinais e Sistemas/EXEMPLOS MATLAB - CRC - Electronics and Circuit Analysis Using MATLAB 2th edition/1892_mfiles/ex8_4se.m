% Harmonic Distortion and rms value
% calculate coefficients of harmonics
c0 = 10/pi;
for n = 1: 15
   c(n) = (20/pi)*(1/(4*n*n - 1));
end

% rms calculations
for n = 1: 15
   g1(n) = 0.5*(c(n)^2);
end

g2 = sum(g1)+ c0^2;
grms = sqrt(g2);

% total harmonic calculations
for k = 2:15
   g3(k) = c(k)^2;
end
g4 = sqrt(sum(g3));
thd = (g4/c(1))*100;
fprintf('The rms value is %8.3f\n', grms)
fprintf('The total harmonic distortion is %8.3f percent\n',thd)