#!/usr/bin/env /bin/bash

# Activate the virtual environment
source ./bin/activate

# Optimize the retrained graph
python -m tensorflow.python.tools.optimize_for_inference \
  --input=tf_files/retrained_graph.pb \
  --output=tf_files/optimized_graph.pb \
  --input_names="input" \
  --output_names="final_result"

# Quantize the optimized graph
python -m scripts.quantize_graph \
  --input=tf_files/optimized_graph.pb \
  --output=tf_files/rounded_graph.pb \
  --output_node_names=final_result \
  --mode=weights_rounded

# Compress the quantized graph
gzip -c tf_files/rounded_graph.pb > tf_files/rounded_graph.pb.gz

# Check the results of the compression
gzip -l tf_files/rounded_graph.pb.gz