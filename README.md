# FWIME-applications
Repository for FWIME-applications

# Download and install the following applications:
- Singularity: https://sylabs.io/guides/3.0/user-guide/installation.html
- git lfs: https://git-lfs.github.com/

# Getting started
1. Clone the repo.<br>
  `$ git clone https://github.com/gbarnier/FWIME-applications.git`
2. Initialize submodule.<br>
  `$ git submodule update --init -- external/containers`
3. Pull singularity image.<br>
  `$ cd external/containers && git lfs pull --include wave/wave-2d_cuda10.0_sep.sif --exclude "" && cd -`
4. Set your DATAPATH environment variable.
  `$ export DATAPATH=<YOUR_DATA_PATH>`
5. Run singularity shell.<br>
  `$ ./run_singularity_jupyter.sh`
