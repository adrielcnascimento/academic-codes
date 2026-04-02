%  Two-port parameter conversion
% z-parameters
z11 = 14+j*9;
z12 = 4+j*3;
z21 = 4+j*3;
z22 = 12+j*2;
% Conversion equations
h11 =  (z11*z22 - z12*z21)/z22
h12 = z12/z22
h21 = -z21/z22
h22 = 1/z22