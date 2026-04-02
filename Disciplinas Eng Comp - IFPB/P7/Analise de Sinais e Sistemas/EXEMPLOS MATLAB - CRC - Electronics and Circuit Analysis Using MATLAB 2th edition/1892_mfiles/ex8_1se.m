% Fourier series expansion
f = 500; c = 4/pi; dt = 5.0e-05;
tpts = (4.0e-3/5.0e-5) + 1;
for n = 1: 12
for m = 1: tpts
s1(n,m) = (4/pi)*(1/(2*n - 1))*sin((2*n - 1)*2*pi*f*dt*(m-1));
end
end
for m = 1:tpts
   s2 = s1(:,m);
   s3(m) = sum(s2);
end
f1 = s3';
t = 0.0:5.0e-5:4.0e-3;
plot(t,f1)
xlabel('Time, s')
ylabel('Amplitude, V')
title('Fourier Series Expansion')