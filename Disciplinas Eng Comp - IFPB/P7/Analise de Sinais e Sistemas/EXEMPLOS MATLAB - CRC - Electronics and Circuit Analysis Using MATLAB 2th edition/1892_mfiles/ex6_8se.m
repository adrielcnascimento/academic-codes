% Frequency response from transfer function
num = [2 0 4];
den = [1 4 16];
w = logspace(-2, 4);
 h = freqs(num, den, w);
 f = w/(2*pi);
 mag = 20*log10(abs(h));
 semilogx(f, mag)
 title('Magnitude Response')
 xlabel('Frequency, Hz')
 ylabel('Gain, dB')