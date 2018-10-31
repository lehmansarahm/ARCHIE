% this graph should demonstrate the difference in CPU / RAM consumption
% over time between a controlled UNMODIFIED app and the same app modified
% to use our framework

% PROCEDURE:
%   - shut down all unnecessary apps running on the device
%   - start up target app (unmodified)
%   - run five trials of five minutes each
%       ("/scripts/run_resource_profiler.sh")
%   - update output files to include derived fields
%   - repeat the above with modified target app (including GTC services)

% -----------------------------------------------
% -----------------------------------------------

% M = csvread(filename,R1,C1,[R1 C1 R2 C2])
% "Before" Range: Cell B3 = [2,1] ... Cell F62 = [61,5]
% "After" Range: Cell G3 = [2,6] ... Cell K62 = [61,10]

BEFORE_STARTING_ROW = 2;
BEFORE_STARTING_COLUMN = 1;
BEFORE_ENDING_ROW = 61;
BEFORE_ENDING_COLUMN = 5;

AFTER_STARTING_ROW = 2;
AFTER_STARTING_COLUMN = 6;
AFTER_ENDING_ROW = 61;
AFTER_ENDING_COLUMN = 10;

VERSIONS = { 'Before', 'After' };

% -----------------------------------------------
% -----------------------------------------------

filename = 'before-after-cpu-system.csv';
before_cpu_system_matrix = csvread(filename, ...
    BEFORE_STARTING_ROW, BEFORE_STARTING_COLUMN, ...
    [BEFORE_STARTING_ROW, BEFORE_STARTING_COLUMN, ...
        BEFORE_ENDING_ROW, BEFORE_ENDING_COLUMN]);
before_cpu_system = before_cpu_system_matrix(:);

after_cpu_system_matrix = csvread(filename, ...
    AFTER_STARTING_ROW, AFTER_STARTING_COLUMN, ...
    [AFTER_STARTING_ROW, AFTER_STARTING_COLUMN, ...
        AFTER_ENDING_ROW, AFTER_ENDING_COLUMN]);
after_cpu_system = after_cpu_system_matrix(:);

boxplot([ before_cpu_system(:), after_cpu_system(:) ], VERSIONS);
xlabel('Application Version')
ylabel('Kernel-space CPU Usage')
saveas(gcf,'fig_beforeAfter_cpuSystem','epsc')
figure();

% -----------------------------------------------
% -----------------------------------------------

filename = 'before-after-cpu-user.csv';
before_cpu_user_matrix = csvread(filename, ...
    BEFORE_STARTING_ROW, BEFORE_STARTING_COLUMN, ...
    [BEFORE_STARTING_ROW, BEFORE_STARTING_COLUMN, ...
        BEFORE_ENDING_ROW, BEFORE_ENDING_COLUMN]);
before_cpu_user = before_cpu_user_matrix(:);

after_cpu_user_matrix = csvread(filename, ...
    AFTER_STARTING_ROW, AFTER_STARTING_COLUMN, ...
    [AFTER_STARTING_ROW, AFTER_STARTING_COLUMN, ...
        AFTER_ENDING_ROW, AFTER_ENDING_COLUMN]);
after_cpu_user = after_cpu_user_matrix(:);

boxplot([ before_cpu_user(:), after_cpu_user(:) ], VERSIONS);
xlabel('Application Version')
ylabel('User-space CPU Usage')
saveas(gcf,'fig_beforeAfter_cpuUser','epsc')
figure();

% -----------------------------------------------
% -----------------------------------------------

filename = 'before-after-ram.csv';
before_ram_matrix = csvread(filename, ...
    BEFORE_STARTING_ROW, BEFORE_STARTING_COLUMN, ...
    [BEFORE_STARTING_ROW, BEFORE_STARTING_COLUMN, ...
        BEFORE_ENDING_ROW, BEFORE_ENDING_COLUMN]);
before_ram = before_ram_matrix(:);

after_ram_matrix = csvread(filename, ...
    AFTER_STARTING_ROW, AFTER_STARTING_COLUMN, ...
    [AFTER_STARTING_ROW, AFTER_STARTING_COLUMN, ...
        AFTER_ENDING_ROW, AFTER_ENDING_COLUMN]);
after_ram = after_ram_matrix(:);

boxplot([ before_ram(:), after_ram(:) ], VERSIONS);
xlabel('Application Version')
ylabel('RAM Usage')
saveas(gcf,'fig_beforeAfter_ram','epsc')