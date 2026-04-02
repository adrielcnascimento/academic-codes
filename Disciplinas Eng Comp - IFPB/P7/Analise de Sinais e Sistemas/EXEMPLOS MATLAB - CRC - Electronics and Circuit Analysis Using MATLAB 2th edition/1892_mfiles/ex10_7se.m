% Reverse Saturation Current vs. temperature
%
t = 25:5:125;
is = 1.0e-15*(1.15).^(t-25);
plot(t,is,'b', t,is,'ob')
title('Reverse Saturation Current vs. Temperature')
xlabel('Temperature, C')
ylabel('Current, A')