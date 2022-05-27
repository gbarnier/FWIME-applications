singularity exec --nv --home $PWD --bind $DATAPATH \
  --env PYTHONPATH=“\$PYTHONPATH:${PWD}/src”,DATAPATH=$DATAPATH \
  external/containers/wave/wave-2d_cuda10.0_sep.sif \
  jupyter-lab --no-browser --port=6530 --ip 0.0.0.0
