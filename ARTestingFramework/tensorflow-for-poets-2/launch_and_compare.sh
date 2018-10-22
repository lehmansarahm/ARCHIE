#!/usr/bin/env /bin/bash

# Activate the virtual environment
source ./bin/activate

echo " "
echo "CLASSIFICATION RESULTS OF THE OPTIMIZED GRAPH"
python -m scripts.label_image \
  --image=tf_files/flower_photos/daisy/3475870145_685a19116d.jpg \
  --graph=tf_files/optimized_graph.pb

echo " "
echo "CLASSIFICATION RESULTS OF THE COMPRESSED, QUANTIZED GRAPH"
python -m scripts.label_image \
  --image=tf_files/flower_photos/daisy/3475870145_685a19116d.jpg \
  --graph=tf_files/rounded_graph.pb

echo " "
echo "PERFORMANCE RESULTS OF THE OPTIMIZED GRAPH"
python -m scripts.evaluate  tf_files/optimized_graph.pb

echo " "
echo "PERFORMANCE RESULTS OF THE COMPRESSED, QUANTIZED GRAPH"
python -m scripts.evaluate  tf_files/rounded_graph.pb