%
% solution of a set of first order differential equations
% the function diff3(t,v) is created to evaluate
% the differential equation
% the name of the m-file is diff3.m
%
function vdot = diff3(t,v)
vdot =[-40 20 0; 20 -20 200000; 0 0.1 -1000]*[v]+ [100; 0; 0];

