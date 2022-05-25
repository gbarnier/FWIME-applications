# FWIME-applications
Repository for FWIME-applications

## Clone the repository: git clone FWIME-applications
## Download the singularity image on local computer:
## Set scratch directory environment variable
## Start Jupyter lab within singularity container
## Open notebook and run for reproducibility (follow instructions)

# Software requirements
## Singularity: https://sylabs.io/guides/3.0/user-guide/installation.html
## git lfs: https://git-lfs.github.com/

# Getting started
1. clone the repo.<br>
  `$ git clone https://github.com/gbarnier/FWIME-applications.git`
2. initialize submodule.<br>
  `$ git submodule update --init -- external/containers`
3. pull singularity image.<br>
  `$ git lfs checkout external/containers/wave/wave-2d_cuda10.0_sep.sif`
4. set your DATAPATH environment variable.
  `$ export DATAPATH=<YOUR_DATA_PATH>`
5. run singularity shell.<br>
  `$ ./run_singularity_shell.sh`
