% Example 1.1
% this program determines the current
% matrix Z and voltage vector V
% Z is the impedance matrix
% V is the voltage matrix
% initialize the matrix Z and vector V

Z = [3    6    9;
     6    15   12;
     9    12   20];

V = [10  15  12]';

% solve for the loop currents
I = inv(Z)*V;
% Current is printed 
I