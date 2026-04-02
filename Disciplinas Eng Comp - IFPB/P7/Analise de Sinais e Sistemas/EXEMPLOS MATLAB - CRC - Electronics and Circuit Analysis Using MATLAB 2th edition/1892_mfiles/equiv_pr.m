function req = equiv_pr(r)
% equiv_pr is a function program for obtaining
%		the equivalent resistance of series
%		connected resistors
% usage: req = equiv_pr(r)
%		r is an input vector of length n
%
n = length(r);	% number of resistors
tmp = 0.0;
for i = 1:n
   tmp = tmp + 1/r(i);
end
req = 1/tmp;

