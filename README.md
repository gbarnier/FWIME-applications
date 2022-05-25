# FWIME-applications
Repository for FWIME-applications

# Software requirements: download and install the following applications:
- Singularity: https://sylabs.io/guides/3.0/user-guide/installation.html
- git lfs: https://git-lfs.github.com/

# Getting started
1. Clone the repo.<br>
  `$ git clone https://github.com/gbarnier/FWIME-applications.git`
2. Initialize submodule.<br>
  `$ git submodule update --init -- external/containers`
3. Pull singularity image.<br>
  `$ git lfs checkout external/containers/wave/wave-2d_cuda10.0_sep.sif`
4. Set your DATAPATH environment variable.
  `$ export DATAPATH=<YOUR_DATA_PATH>`
5. Run singularity shell.<br>
  `$ ./run_singularity_shell.sh`
