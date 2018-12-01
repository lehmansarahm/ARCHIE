function [ output_args ] = extractCpuSystem( input_args )

if ~isstring(input_args)
    error('Input must be a string')
end

% "Before" Range: Cell 2A = [1,0]
BEFORE_STARTING_ROW = 1;
BEFORE_STARTING_COLUMN = 0;

output_args = csvread(input_args, BEFORE_STARTING_ROW, BEFORE_STARTING_COLUMN);
% output_args = 0;

end