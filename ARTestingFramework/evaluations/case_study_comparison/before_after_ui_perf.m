% this graph should demonstrate the difference in FPS, processing time
% over time between a controlled UNMODIFIED app and the same app modified
% to use our framework

% PROCEDURE:
%   - shut down all unnecessary apps running on the device
%   - start up target app (unmodified)
%   - run five trials of five minutes each
%       (setting "ClassifierApplication" TESTING property to TRUE)
%   - update output files to include derived fields
%   - repeat the above with modified target app (including GTC services)

set(0,'defaultaxesfontsize',20);
set(0,'defaulttextfontsize',25);

% -----------------------------------------------
% -----------------------------------------------

% M = csvread(filename,R1,C1,[R1 C1 R2 C2])
% FPS "Before" Range: Cell B3 = [2,1] ... Cell F302 = [301,5]
% FPS "After" Range: Cell G3 = [2,6] ... Cell K302 = [301,10]

BEFORE_STARTING_ROW = 2;
BEFORE_STARTING_COLUMN = 1;
BEFORE_ENDING_ROW = 301;
BEFORE_ENDING_COLUMN = 5;

AFTER_STARTING_ROW = 2;
AFTER_STARTING_COLUMN = 6;
AFTER_ENDING_ROW = 301;
AFTER_ENDING_COLUMN = 10;

VERSIONS = { 'Before', 'After' };

% -----------------------------------------------
% -----------------------------------------------

filename = 'before-after-fps.csv';
before_class_matrix = csvread(filename, ...
    BEFORE_STARTING_ROW, BEFORE_STARTING_COLUMN, ...
    [BEFORE_STARTING_ROW, BEFORE_STARTING_COLUMN, ...
        BEFORE_ENDING_ROW, BEFORE_ENDING_COLUMN]);
before_class = before_class_matrix(:);

after_class_matrix = csvread(filename, ...
    AFTER_STARTING_ROW, AFTER_STARTING_COLUMN, ...
    [AFTER_STARTING_ROW, AFTER_STARTING_COLUMN, ...
        AFTER_ENDING_ROW, AFTER_ENDING_COLUMN]);
after_class = after_class_matrix(:);

boxplot([ before_class(:), after_class(:) ], VERSIONS);
xlabel('Application Version')
ylabel('Frames Per Second')
saveas(gcf,'fig-beforeAfter-fps','epsc')
figure();

% -----------------------------------------------
% -----------------------------------------------

% Classification "Before" Range: Cell B3 = [2,1] ... Cell F2723 = [2722,5]
% Classification "After" Range: Cell G3 = [2,6] ... Cell K2723 = [2722,10]

% BEFORE_ENDING_ROW = 2722;
% AFTER_ENDING_ROW = 2722;

filename = 'before-after-procTime.csv';
before_class_matrix = csvread(filename, ...
    BEFORE_STARTING_ROW, BEFORE_STARTING_COLUMN, ...
    [BEFORE_STARTING_ROW, BEFORE_STARTING_COLUMN, ...
        BEFORE_ENDING_ROW, BEFORE_ENDING_COLUMN]);
before_class = before_class_matrix(:);

after_class_matrix = csvread(filename, ...
    AFTER_STARTING_ROW, AFTER_STARTING_COLUMN, ...
    [AFTER_STARTING_ROW, AFTER_STARTING_COLUMN, ...
        AFTER_ENDING_ROW, AFTER_ENDING_COLUMN]);
after_class = after_class_matrix(:);

boxplot([ before_class(:), after_class(:) ], VERSIONS);
xlabel('Application Version')
ylabel('Classification Time (ms)')
saveas(gcf,'fig-beforeAfter-procTime','epsc')