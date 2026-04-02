function VIN = square1(k)
% square(t)
% This function is used to define one period of the input
%	the input square wave to integrator
T = 2e-3;	%period of square wave
b = T; 	%Upper limit of integration
n = 0:0.01:1; 	%Number of total data points
% Obtain output voltage
m = length(n);
% Generate time
for i = 1:m
   t(i) = T*i/m;
end
for i = 1:m
  if t(i) < 1e-3
	 VX(i) = 4.0;
 else
   VX(i) = -4.0;
end 
end
for n = 1:k
   VIN(n)= VX(n)
end