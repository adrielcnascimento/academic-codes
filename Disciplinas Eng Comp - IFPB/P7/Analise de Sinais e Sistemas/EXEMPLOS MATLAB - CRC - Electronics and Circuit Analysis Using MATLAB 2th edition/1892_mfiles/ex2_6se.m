% The convolution function Z = conv(X, Y) is used
X = [0 1 2 3 2 1 0];
Y = [0 1 1 0];
Z = conv(X, Y);
stem(Z), title('Convolution Between X and Y')
