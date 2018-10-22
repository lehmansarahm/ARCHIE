#!/usr/bin/env /bin/bash

source ./bin/activate

python -m scripts.label_image \
--graph=tf_files/retrained_graph.pb \
--image=tf_files/flower_photos/daisy/21652746_cc379e0eea_m.jpg
