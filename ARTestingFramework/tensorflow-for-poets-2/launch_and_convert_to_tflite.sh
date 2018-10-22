#!/usr/bin/env /bin/bash

source ./bin/activate

IMAGE_SIZE=224

toco \
  --graph_def_file=tf_files/retrained_graph.pb \
  --output_file=tf_files/optimized_graph.lite \
  --output_format=TFLITE \
  --input_shape=1,${IMAGE_SIZE},${IMAGE_SIZE},3 \
  --input_array=input \
  --output_array=final_result \
  --inference_type=FLOAT \
  --input_data_type=FLOAT

#  --input_file=tf_files/retrained_graph.pb \
#  --input_format=TENSORFLOW_GRAPHDEF \
