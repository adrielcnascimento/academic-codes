% 
for i= 1:100
   t = 1.0e-04;
   T = 5.0e-03;
  x(i) = 2*T*i;
  y(i) = sin(2*pi*t*i/T);
end
plot(x,y)

