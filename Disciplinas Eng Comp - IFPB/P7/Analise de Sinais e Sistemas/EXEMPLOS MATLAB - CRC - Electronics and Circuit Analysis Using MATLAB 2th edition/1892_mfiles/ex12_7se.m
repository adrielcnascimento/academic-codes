%
% Analysis of MOSFET bias circuit
%
vt=2; kn=0.5e-3; vdd=9;
rg1=10e6; rg2=10e6; rs=10e3; rd=10e3;
vg=vdd * rg2/(rg1 + rg2);

% Id is calculated assuming device is in saturation

a1 = kn*(rd^2);
a2 = -(1 + 2*(vg - vt)*rd)*kn;
a3 = kn * (vg - vt)^2;
p1 = [a1, a2, a3];
irt = roots(p1);

% check for the sensible value of the drain current
 
vgs = vg - rs * irt(1);
 if vgs > vt
	id = irt(1);
   else
	id = irt(2);
% check for sensible value of the drain current
   vgs = vg - rs*irt(1);
	if vgs > vt
	  id = irt(1);
	 else
	  id = irt(2);
	end
vds=vdd - (rs + rd)*id;
end

% print out results
fprintf('Drain current is %7.3e Amperes\n',id)
fprintf('Drain-source voltage is %7.3e Volts\n', vds)