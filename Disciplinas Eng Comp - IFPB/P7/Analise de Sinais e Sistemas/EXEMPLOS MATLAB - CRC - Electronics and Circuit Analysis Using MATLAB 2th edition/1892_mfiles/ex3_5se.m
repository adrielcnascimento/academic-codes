% input values of the inductors in input order
%
%
disp('Enter Inductor values with spaces between them and  enclosed in brackets')
ind = input('Enter inductor values')
num = length(ind);     % number of elements in array ind
lequiv = 0;
 for i = 1:num
	lequiv= lequiv + ind(i);
end
%
fprintf('The Equivalent Inductance is %8.3e Henries', lequiv)
