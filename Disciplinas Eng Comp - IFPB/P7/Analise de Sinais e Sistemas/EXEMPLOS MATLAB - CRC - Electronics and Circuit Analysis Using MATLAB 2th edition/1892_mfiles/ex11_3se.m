% Effect of finite open-loop gain
a = logspace(2,8);
r1 = 500; r2 = 50e3; r21 = r2/r1;
g = [];
n = length(a);
for i = 1:n
 g(i) = r21/(1+(1+r21)/a(i));
end
semilogx(a,g,'b')
xlabel('Open Loop Gain')
ylabel('Closed Loop Gain')
title('Effect of Finite Open Loop Gain')
axis([1.0e2,1.0e8,40,110])