% this graph should demonstrate the difference in FPS / processing time
% over time between two versions of a CV application

% one version of the app should have very permissive parameters, and the
% other should have very restrictive parameters

% NEED TO DEMONSTRATE THE IMPACT POORLY CHOSEN RUNTIME PARAMS CAN HAVE

set(0,'defaultaxesfontsize',20);
set(0,'defaulttextfontsize',25);

% -----------------------------------------------
% -----------------------------------------------

% RESOLUTIONS = categorical({ '176 x 144', '352 x 288', '640 x 480', ...
%    '1280 x 960', '2048 x 1536', '3200 x 2400', '4032 x 3024' });

RESOLUTIONS = { 'XX-Sm', 'X-Sm', 'Sm', 'Md', 'Lg', 'X-Lg', 'XX-Lg' };

% -----------------------------------------------
% -----------------------------------------------

AVG_PROC_TIMES = [ 78.48782239	83.63851909	96.15488256	...
    168.0789285	326.4624559	686.914893	1043.379691 ];

bar(AVG_PROC_TIMES);
set(gca,'xticklabel',RESOLUTIONS)
xlabel('Camera Preview Resolution')
ylabel('Average Processing Time (ms)')

saveas(gcf,'fig-params-procTime','epsc')
figure();

% -----------------------------------------------
% -----------------------------------------------

AVG_CLASSIFICATIONS_PER_SECOND = [ 9.956810631	9.833887043	...
    8.863787375	5.225913621	2.717607973	1.415282392	0.890365449 ];

bar(AVG_CLASSIFICATIONS_PER_SECOND);
set(gca,'xticklabel',RESOLUTIONS)
xlabel('Camera Preview Resolution')
ylabel('Average Classifications Per Second')
ylim([0 10.5])

saveas(gcf,'fig-params-cps','epsc')
figure();

% -----------------------------------------------
% -----------------------------------------------

FALSE_NEGATIVE_PERCENTAGES = [ 1	0.962162162	...
    0.077211394	0.047679593	0.018337408	0.232394366	0.167910448 ];

bar(FALSE_NEGATIVE_PERCENTAGES);
set(gca,'xticklabel',RESOLUTIONS)
xlabel('Camera Preview Resolution')
ylabel('Percent of Positive Classifications Missed')
ylim([0 1.1])

saveas(gcf,'fig-params-falseNeg','epsc')