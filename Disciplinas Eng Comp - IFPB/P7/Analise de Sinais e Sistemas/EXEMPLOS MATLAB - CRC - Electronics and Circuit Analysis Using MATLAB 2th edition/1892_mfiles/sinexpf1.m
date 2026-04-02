%
function y = sinexpf1(t)
t2 = 1/240; tp = 1/60;
rc = 10e3*100e-6;
y = sin(120*pi*(t-tp)) - exp(-(t-t2)/rc);