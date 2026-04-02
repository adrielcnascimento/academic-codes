%
x = -4:0.5:4;
y = x.^2; % square of x
z = x.^3; % cube of x
subplot(211), plot(x, y), title('square of x')
subplot(212), plot(x, z), title('cube of x')
