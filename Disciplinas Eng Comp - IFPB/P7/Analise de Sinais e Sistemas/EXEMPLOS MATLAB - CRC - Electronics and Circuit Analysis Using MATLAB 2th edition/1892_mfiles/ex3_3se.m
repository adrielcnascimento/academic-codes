% vo is the output voltage
% vs is the input voltage
% Generate the sine voltage
t = 0.0:0.1e-4:5e-3;
fo=200;	% frequency of sine wave
len = length(t);
for i =1:len
   s(i) = 0.8*sin(2*pi*fo*t(i));
   % Generate a normally distributed white noise
   n(i) = 0.4*randn(1);
   % generate the noisy signal
   vs(i) = s(i) + n(i);
end
% calculation of output voltage
%
len1 = len -1;
for i=1:len1
	if 	vs(i + 1) >= 0.3;
		vo(i+1) = -4;
	elseif	vs(i+1) > -0.3 & vs(i+1)< 0.3 & vo(i) == -4
			vo(i+1) = -4;
	elseif	vs(i+1) > -0.3 & vs(i+1 )< 0.3 & vo(i) == +4
			vo(i+1) = 4;
	else
			vo(i+1) = +4;
	end
end
%
% Use subplots to plot vs and vo
	subplot (211), plot (t(1:40), vs(1:40))
	title ('Noisy time domain signal')
	subplot (212), plot (t(1:40), vo(1:40))
	title ('Output Voltage')
	xlabel ('Time in sec')
