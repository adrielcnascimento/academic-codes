% program computes the nodal voltages
% given the admittance matrix Y and current vector I
% Y is the admittance matrix and I is the current vector
% initialize matrix y and vector I using YV=I form
Y = [ 0.15    -0.1     -0.05;
     -0.1      0.145   -0.025;
     -0.05    -0.025    0.075];
I = [5;
     0;
     2];
% solve for the voltage
fprintf('Nodal voltages V1, V2 and V3 are \n')
v = inv(Y)*I
