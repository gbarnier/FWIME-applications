# Welcome to our repository: FWIME-applications
* This goal of this repository is to reproduce the results from the manuscript submitted to Geophysics, entitled **Full waveform inversion by model extension: practical applications**
* Authors for this repository: Guillaume Barnier (barnier@gmail.com), Ettore Biondi (ebiondi@caltech.edu), Stuart Farris (sfarris@sep.stanford.edu)
* Date: 05/12/2022
* Feel free to contact us for any questions or bugs to report

---
# About the authors
* [**Guillaume Barnier**](https://www.linkedin.com/in/guillaume-barnier/)
    * Ph.D. student at Stanford Univeristy in the Stanford Exporation Project (SEP) group
    * Research interests: seismic imaging, velocity model building, optimization of large-scale non-convex inverse problems, and machine learning
    * Guillaume's [personal website](https://gbarnier.github.io)
* [**Ettore Biondi**](https://www.linkedin.com/in/ettore-biondi/)
    * Postdoctoral Researcher at California Institute of Technology in its Seismological Laboratory working within Professor Zhongwen Zhan's research group
    * Former Ph.D. student at Stanford Univeristy in the Stanford Exporation Project (SEP) group
    * Passionate about geophysics, computer science, chemistry, and Earth science
    * Ettore's [personal page](http://www.seismolab.caltech.edu/biondi_e.html)
* [**Stuart Farris**](https://www.linkedin.com/in/stuart-farris/)
    * Ph.D. student at Stanford Univeristy in the Stanford Exporation Project (SEP) group
    * Research interests: Carbon sequestration, machine learning, velocity model building using deep learning, seismic imaging, and inverse problems
    * Currently an AI resident at [X Development](https://x.company)

---
# Useful links
* Our YouTube channel ["egoptimization"](https://www.youtube.com/channel/UCjloQO0H6JnddXoB017mcog)
* Stanford Exploration project (SEP) [website](https://sep.sites.stanford.edu) and [YouTube channel](https://www.youtube.com/channel/UCk8h7bfpd-vl_CWCDLHxHzA)
* Ettore's Ph.D. [thesis](http://sepwww.stanford.edu/data/media/public/sep/ettore/pdfs/thesis/thesis_Ettore.pdf) at Stanford University
* Guillaume's Ph.D. [thesis](http://sepwww.stanford.edu/data/media/public/sep/gbarnier/Guillaume_thesis_sep_website.pdf) at Stanford University

---
# Instructions
1. Download and install the following applications:
    * Singularity: https://sylabs.io/guides/3.0/user-guide/installation.html
    * git lfs: https://git-lfs.github.com/
2. Clone the repo.<br>
  `$ git clone https://github.com/gbarnier/FWIME-applications.git`
3. Initialize submodule.<br>
  `$ git submodule update --init -- external/containers`
4. Pull singularity image.<br>
  `$ cd external/containers && git lfs pull --include wave/wave-2d_cuda10.0_sep.sif --exclude "" && cd -`
5. Set your DATAPATH environment variable.
  `$ export DATAPATH=<YOUR_DATA_PATH>`
6. Run singularity shell.<br>
  `$ ./run_singularity_jupyter.sh`
