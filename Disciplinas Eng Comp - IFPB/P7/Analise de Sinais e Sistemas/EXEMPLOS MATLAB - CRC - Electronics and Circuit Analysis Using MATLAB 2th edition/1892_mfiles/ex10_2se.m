% Minority Carriers in Doped Semiconductor
% hole concentration in a n-type semiconductor
nd = logspace(13,18);
n = nd;
ni = 1.52e10;
ni_sq = ni*ni;
p = ni_sq./nd;
semilogx(nd,p,'b',nd, p,'ob')
title('Hole Concentration')
xlabel('Doping Concentration, cm-3')
ylabel('Hole Concentration, cm-3')