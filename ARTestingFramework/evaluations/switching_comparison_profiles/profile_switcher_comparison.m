set(0,'defaultaxesfontsize',20);
set(0,'defaulttextfontsize',25);

% -----------------------------------------------
% -----------------------------------------------

VERSIONS = { 'I/O Profiles', 'Core Event Rec. Profiles' };
NUM_OF_PROFILES = { '1', '3', '5', '7', '10' };  

PROFILE_FOLDER_NAMES = {'profiles1', 'profiles3', 'profiles5', ...
    'profiles7', 'profiles10'};

FILE_NAMES = {'trial1.csv', 'trial2.csv', 'trial3.csv', ...
    'trial4.csv', 'trial5.csv'};

DIVIDER = string('/');

% -----------------------------------------------
% -----------------------------------------------

profile_mem_usage_per_test_case      	= cell(1, length(PROFILE_FOLDER_NAMES));
profile_cpu_user_per_test_case          = cell(1, length(PROFILE_FOLDER_NAMES));
profile_cpu_system_per_test_case        = cell(1, length(PROFILE_FOLDER_NAMES));

test_case_counter = 1;

for folder_name = PROFILE_FOLDER_NAMES 
    
    avg_mem_usage_per_trial             = cell(1, length(FILE_NAMES));
    avg_cpu_user_per_trial              = cell(1, length(FILE_NAMES));
    avg_cpu_system_per_trial            = cell(1, length(FILE_NAMES));
    
    trial_counter = 1;
    
    for file_name = FILE_NAMES

        full_file_name = join([ folder_name{1}, DIVIDER, file_name ], '');
        full_file_name
        
        system_matrix = extractCpuSystem(full_file_name);
        mem_usage = system_matrix(:, 7);
        avg_mem_usage_per_trial{trial_counter} = mean(mem_usage);
        
        cpu_user_usage = system_matrix(:, 10);
        avg_cpu_user_per_trial{trial_counter} = mean(cpu_user_usage);
        
        cpu_system_usage = system_matrix(:, 12);
        avg_cpu_system_per_trial{trial_counter} = mean(cpu_system_usage);
        
        trial_counter = trial_counter + 1;
        
    end
    
    avg_mem_usage = mean(cell2mat(avg_mem_usage_per_trial));
    profile_mem_usage_per_test_case{test_case_counter} = avg_mem_usage;
    
    avg_cpu_user = mean(cell2mat(avg_cpu_user_per_trial));
    profile_cpu_user_per_test_case{test_case_counter} = avg_cpu_user;
    
    avg_cpu_system = mean(cell2mat(avg_cpu_system_per_trial));
    profile_cpu_system_per_test_case{test_case_counter} = avg_cpu_system;

    test_case_counter = test_case_counter + 1;
    
end

% -----------------------------------------------
% -----------------------------------------------


CLASSIFIER_FOLDER_NAMES = {'classifiers1', 'classifiers3', 'classifiers5', ...
    'classifiers7', 'classifiers10'};

classifier_mem_usage_per_test_case   	= cell(1, length(CLASSIFIER_FOLDER_NAMES));
classifier_cpu_user_per_test_case     	= cell(1, length(CLASSIFIER_FOLDER_NAMES));
classifier_cpu_system_per_test_case   	= cell(1, length(CLASSIFIER_FOLDER_NAMES));

test_case_counter = 1;

for folder_name = CLASSIFIER_FOLDER_NAMES 
    
    avg_mem_usage_per_trial             = cell(1, length(FILE_NAMES));
    avg_cpu_user_per_trial              = cell(1, length(FILE_NAMES));
    avg_cpu_system_per_trial            = cell(1, length(FILE_NAMES));
    
    trial_counter = 1;
    
    for file_name = FILE_NAMES

        full_file_name = join([ folder_name{1}, DIVIDER, file_name ], '');
        full_file_name
        
        system_matrix = extractCpuSystem(full_file_name);
        mem_usage = system_matrix(:, 7);
        avg_mem_usage_per_trial{trial_counter} = mean(mem_usage);
        
        cpu_user_usage = system_matrix(:, 10);
        avg_cpu_user_per_trial{trial_counter} = mean(cpu_user_usage);
        
        cpu_system_usage = system_matrix(:, 12);
        avg_cpu_system_per_trial{trial_counter} = mean(cpu_system_usage);
        
        trial_counter = trial_counter + 1;
        
    end
    
    avg_mem_usage = mean(cell2mat(avg_mem_usage_per_trial));
    classifier_mem_usage_per_test_case{test_case_counter} = avg_mem_usage;
    
    avg_cpu_user = mean(cell2mat(avg_cpu_user_per_trial));
    classifier_cpu_user_per_test_case{test_case_counter} = avg_cpu_user;
    
    avg_cpu_system = mean(cell2mat(avg_cpu_system_per_trial));
    classifier_cpu_system_per_test_case{test_case_counter} = avg_cpu_system;

    test_case_counter = test_case_counter + 1;
    
end

% -----------------------------------------------
% -----------------------------------------------
    
mem_usage_all = [ profile_mem_usage_per_test_case{1}, classifier_mem_usage_per_test_case{1}; ...
        profile_mem_usage_per_test_case{2}, classifier_mem_usage_per_test_case{2}; ...
        profile_mem_usage_per_test_case{3}, classifier_mem_usage_per_test_case{3}; ...
        profile_mem_usage_per_test_case{4}, classifier_mem_usage_per_test_case{4}; ...
        profile_mem_usage_per_test_case{5}, classifier_mem_usage_per_test_case{5} ];
bar(mem_usage_all);
set(gca, 'xticklabel', NUM_OF_PROFILES);
% xlabel('Number of Profiles, Classifiers')
ylabel('Avg. Memory Utilization')
ylim([0.9 0.945])
legend(VERSIONS,'Location','southoutside','Orientation','horizontal')
saveas(gcf,'fig-profileSwitching-memUsage','epsc')
figure()

% -----------------------------------------------
% -----------------------------------------------
    
cpu_user_all = [ profile_cpu_user_per_test_case{1}, classifier_cpu_user_per_test_case{1}; ...
        profile_cpu_user_per_test_case{2}, classifier_cpu_user_per_test_case{2}; ...
        profile_cpu_user_per_test_case{3}, classifier_cpu_user_per_test_case{3}; ...
        profile_cpu_user_per_test_case{4}, classifier_cpu_user_per_test_case{4}; ...
        profile_cpu_user_per_test_case{5}, classifier_cpu_user_per_test_case{5} ];
bar(cpu_user_all);
set(gca, 'xticklabel', NUM_OF_PROFILES);
% xlabel('Number of Profiles, Classifiers')
ylabel('Avg. User-space CPU Utilization')
ylim([0.3 0.38])
legend(VERSIONS,'Location','southoutside','Orientation','horizontal')
saveas(gcf,'fig-profileSwitching-cpuUser','epsc')
figure()

% -----------------------------------------------
% -----------------------------------------------
    
cpu_system_all = [ profile_cpu_system_per_test_case{1}, classifier_cpu_system_per_test_case{1}; ... 
        profile_cpu_system_per_test_case{2}, classifier_cpu_system_per_test_case{2}; ...
        profile_cpu_system_per_test_case{3}, classifier_cpu_system_per_test_case{3}; ... 
        profile_cpu_system_per_test_case{4}, classifier_cpu_system_per_test_case{4}; ...
        profile_cpu_system_per_test_case{5}, classifier_cpu_system_per_test_case{5} ];
bar(cpu_system_all);
set(gca, 'xticklabel', NUM_OF_PROFILES);
% xlabel('Number of Profiles, Classifiers')
ylabel('Avg. Kernel-space CPU Utilization')
legend(VERSIONS,'Location','southoutside','Orientation','horizontal')
ylim([0.06 0.075])
saveas(gcf,'fig-profileSwitching-cpuSystem','epsc')
