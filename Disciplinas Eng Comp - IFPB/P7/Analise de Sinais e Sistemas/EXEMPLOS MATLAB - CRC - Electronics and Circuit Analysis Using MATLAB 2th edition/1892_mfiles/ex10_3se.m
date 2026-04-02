% Diffusion Coefficient vs. Temperature
% Constants
K = 8.62e-5; 
EA = 3.46;   
Do = 0.76;
% Diffusion coefficient with temperature

for i = 1:11
   t(i) = 273 + 1000 + 25*(i-1);
   Dcoef(i) = Do*exp(-EA/(k*t(i)));
end
semilogy(t,Dcoef)
title('Diffusion Coefficient  vs. Temperature')
xlabel('Temperature, K')
ylabel('Diffusion Coefficient , cm2/s ')