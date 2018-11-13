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

set(0,'defaultaxesfontsize',20);
set(0,'defaulttextfontsize',25);

VERSIONS = { 'Original', 'With ARCHIE' };
APPS = { 'Blob Detector', 'TF Classify', 'TF Speech' };  

PROJECT_NAMES = {'opencv_blobDetector', 'opencv_blobDetector_mod', ...
    'opencv_blobDetector', 'opencv_blobDetector_mod', ...   % 'tf_classify', 'tf_classify_mod'
    'opencv_blobDetector', 'opencv_blobDetector_mod'};      % 'tf_speech', 'tf_speech_mod'};
FOLDER_NAMES = {'files1', 'files2', 'files3', 'files4', 'files5'};

CLASSIFICATION_FILENAME = string('classification.csv');
FRAMES_FILENAME = string('frames.csv');
SYSTEM_FILENAME = string('system.csv');

DIVIDER = string('/');

% -----------------------------------------------
% -----------------------------------------------

time_to_classify_per_project            = cell(1, length(PROJECT_NAMES));
min_fps_per_project                     = cell(1, length(PROJECT_NAMES));
max_fps_per_project                     = cell(1, length(PROJECT_NAMES));
avg_fps_per_project                     = cell(1, length(PROJECT_NAMES));
mem_usage_per_project                   = cell(1, length(PROJECT_NAMES));
cpu_user_per_project                    = cell(1, length(PROJECT_NAMES));
cpu_system_per_project                  = cell(1, length(PROJECT_NAMES));

project_counter = 1;

for project_name = PROJECT_NAMES 
    
    avg_time_to_classify_per_folder     = cell(1, length(FOLDER_NAMES));
    avg_min_fps_per_folder              = cell(1, length(FOLDER_NAMES));
    avg_max_fps_per_folder              = cell(1, length(FOLDER_NAMES));
    avg_avg_fps_per_folder              = cell(1, length(FOLDER_NAMES));
    avg_mem_usage_per_folder            = cell(1, length(FOLDER_NAMES));
    avg_cpu_user_per_folder             = cell(1, length(FOLDER_NAMES));
    avg_cpu_system_per_folder           = cell(1, length(FOLDER_NAMES));
    
    folder_counter = 1;
    
    for folder_name = FOLDER_NAMES
        
        class_filename = join([ project_name{1}, DIVIDER, ...
            folder_name{1}, DIVIDER, CLASSIFICATION_FILENAME ], '');
        
        class_matrix = extractCpuSystem(class_filename);
        time_to_classify = class_matrix(:, 8);
        avg_time_to_classify_per_folder{folder_counter} = mean(time_to_classify);

        % -----------------------------------------------
        % -----------------------------------------------

        frame_filename = join([ project_name{1}, DIVIDER, ...
            folder_name{1}, DIVIDER, FRAMES_FILENAME ], '');
        
        frame_matrix = extractCpuSystem(frame_filename);
        min_fps_vector = frame_matrix(:, 10);
        min_fps = min_fps_vector(1);
        avg_min_fps_per_folder{folder_counter} = mean(min_fps);

        max_fps_vector = frame_matrix(:, 11);
        max_fps = max_fps_vector(1);
        avg_max_fps_per_folder{folder_counter} = mean(max_fps);

        avg_fps_vector = frame_matrix(:, 12);
        avg_fps = avg_fps_vector(1);
        avg_avg_fps_per_folder{folder_counter} = mean(avg_fps);

        % -----------------------------------------------
        % -----------------------------------------------

        system_filename = join([ project_name{1}, DIVIDER, ...
            folder_name{1}, DIVIDER, SYSTEM_FILENAME ], '');
        
        system_matrix = extractCpuSystem(system_filename);
        mem_usage = system_matrix(:, 7);
        avg_mem_usage_per_folder{folder_counter} = mean(mem_usage);
        
        cpu_user_usage = system_matrix(:, 10);
        avg_cpu_user_per_folder{folder_counter} = mean(cpu_user_usage);
        
        cpu_system_usage = system_matrix(:, 12);
        avg_cpu_system_per_folder{folder_counter} = mean(cpu_system_usage);

        % -----------------------------------------------
        % -----------------------------------------------
        
        folder_counter = folder_counter + 1;
        
    end
    
    avg_time_to_classify = mean(cell2mat(avg_time_to_classify_per_folder));
    time_to_classify_per_project{project_counter} = avg_time_to_classify;
    
    avg_min_fps = mean(cell2mat(avg_min_fps_per_folder));
    min_fps_per_project{project_counter} = avg_min_fps;
    
    avg_max_fps = mean(cell2mat(avg_max_fps_per_folder));
    max_fps_per_project{project_counter} = avg_max_fps;
    
    avg_avg_fps = mean(cell2mat(avg_avg_fps_per_folder));
    avg_fps_per_project{project_counter} = avg_avg_fps;
    
    avg_mem_usage = mean(cell2mat(avg_mem_usage_per_folder));
    mem_usage_per_project{project_counter} = avg_mem_usage;
    
    avg_cpu_user = mean(cell2mat(avg_cpu_user_per_folder));
    cpu_user_per_project{project_counter} = avg_cpu_user;
    
    avg_cpu_system = mean(cell2mat(avg_cpu_system_per_folder));
    cpu_system_per_project{project_counter} = avg_cpu_system;

    % -----------------------------------------------
    % -----------------------------------------------

    project_counter = project_counter + 1;
    
end

% -----------------------------------------------
% -----------------------------------------------

time_to_classify_all = [ time_to_classify_per_project{1}, time_to_classify_per_project{2} ; ...
        time_to_classify_per_project{3}, time_to_classify_per_project{4}; ...
        time_to_classify_per_project{5}, time_to_classify_per_project{6} ];
bar(time_to_classify_all);
set(gca, 'xticklabel', APPS);
xlabel('Application Version')
ylabel('Avg. Classification Time (ms)')
legend(VERSIONS,'Location','southoutside','Orientation','horizontal')
saveas(gcf,'fig-caseStudies-timeToClassify','epsc')
figure()

% -----------------------------------------------
% -----------------------------------------------

min_fps_all = [ min_fps_per_project{1}, min_fps_per_project{2}; ...
        min_fps_per_project{3}, min_fps_per_project{4}; ...
        min_fps_per_project{5}, min_fps_per_project{6} ];
bar(min_fps_all);
set(gca, 'xticklabel', APPS);
xlabel('Application Version')
ylabel('Average Min FPS')
legend(VERSIONS,'Location','southoutside','Orientation','horizontal')
saveas(gcf,'fig-caseStudies-minFps','epsc')
figure()

% -----------------------------------------------
% -----------------------------------------------

max_fps_all = [ max_fps_per_project{1}, max_fps_per_project{2}; ...
        max_fps_per_project{3}, max_fps_per_project{4}; ...
        max_fps_per_project{5}, max_fps_per_project{6} ];
bar(max_fps_all);
set(gca, 'xticklabel', APPS);
xlabel('Application Version')
ylabel('Average Max FPS')
legend(VERSIONS,'Location','southoutside','Orientation','horizontal')
saveas(gcf,'fig-caseStudies-maxFps','epsc')
figure()

% -----------------------------------------------
% -----------------------------------------------

avg_fps_all = [ avg_fps_per_project{1}, avg_fps_per_project{2}; ...
        avg_fps_per_project{3}, avg_fps_per_project{4}; ...
        avg_fps_per_project{5}, avg_fps_per_project{6} ];
bar(avg_fps_all);
set(gca, 'xticklabel', APPS);
xlabel('Application Version')
ylabel('Average Overall FPS')
legend(VERSIONS,'Location','southoutside','Orientation','horizontal')
saveas(gcf,'fig-caseStudies-avgFps','epsc')
figure()

% -----------------------------------------------
% -----------------------------------------------
    
mem_usage_all = [ mem_usage_per_project{1}, mem_usage_per_project{2}; ...
        mem_usage_per_project{3}, mem_usage_per_project{4}; ...
        mem_usage_per_project{5}, mem_usage_per_project{6} ];
bar(mem_usage_all);
set(gca, 'xticklabel', APPS);
xlabel('Application Version')
ylabel('Avg. Memory Utilization')
legend(VERSIONS,'Location','southoutside','Orientation','horizontal')
saveas(gcf,'fig-caseStudies-memUsage','epsc')
figure()

% -----------------------------------------------
% -----------------------------------------------
    
cpu_user_all = [ cpu_user_per_project{1}, cpu_user_per_project{2}; ...
        cpu_user_per_project{3}, cpu_user_per_project{4}; ...
        cpu_user_per_project{5}, cpu_user_per_project{6} ];
bar(cpu_user_all);
set(gca, 'xticklabel', APPS);
xlabel('Application Version')
ylabel('Avg. User-space CPU Utilization')
legend(VERSIONS,'Location','southoutside','Orientation','horizontal')
saveas(gcf,'fig-caseStudies-cpuUser','epsc')
figure()

% -----------------------------------------------
% -----------------------------------------------
    
cpu_system_all = [ cpu_system_per_project{1}, cpu_system_per_project{2}; ...
        cpu_system_per_project{3}, cpu_system_per_project{4}; ...
        cpu_system_per_project{5}, cpu_system_per_project{6} ];
bar(cpu_system_all);
set(gca, 'xticklabel', APPS);
xlabel('Application Version')
ylabel('Avg. Kernel-space CPU Utilization')
legend(VERSIONS,'Location','southoutside','Orientation','horizontal')
saveas(gcf,'fig-caseStudies-cpuSystem','epsc')
