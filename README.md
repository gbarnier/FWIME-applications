# Welcome to our repository: FWIME-applications
* This goal of this repository is to reproduce the results from the manuscript submitted to Geophysics called **Full waveform inversion by model extension (FWIME): practical applications**
* Authors for this repository: [Guillaume Barnier](https://gbarnier.github.io) (barnier@gmail.com), [Ettore Biondi](https://www.linkedin.com/in/ettore-biondi/) (ebiondi@caltech.edu), [Stuart Farris](https://www.linkedin.com/in/stuart-farris/) (sfarris@sep.stanford.edu)
* Date: 05/12/2022
* Feel free to contact us for any questions or bugs to report

---
# Summary
* This repository contains five notebooks which allow you to reproduce the numerical examples proposed in our paper:
    1. Marmousi2 model (Martin et al., 2002)
    2. North Sea section of the BP 2004 benchmark model (Billette and Brandsberg-Dahl, 2004)
    3. [Seiscope](https://seiscope2.osug.fr)'s syncline model
    4. Salt model (modified from Billette and Brandsberg-Dahl (2004))
    5. West Africa section of the BP 2004 benchmark model (Billette and Brandsberg-Dahl, 2004)

* To make the FWIME results easily reproducible, we use Singularity, a container platform, which allows you to run our code without needing to compile any code.
* Once you have followed the instructions below, simply open the main directory called "FWIME-applications".
* Then, go to the folder corresponding to the numerical example you wish to study/reproduce, and you will find the Jupyter notebook.
* **Important remark**: you need NVIDIA GPU devices to run the notebooks. In the notebooks, the number of GPU devices is to 4 by default. If you wish to use a different number of GPUs, please adjust the parameter "nGpu" in the parameter files located in the "par" folder within each numerical example

---
# Reproducibility requirements
* At least one NVIDIA gpu with CUDA Version >= 10.0 and at least 5 GB of global memory.
* Singularity: https://sylabs.io/guides/3.0/user-guide/installation.html
* git lfs: https://git-lfs.github.com/

---
# Instructions
1. Clone the repo.<br>
  `$ git clone https://github.com/gbarnier/FWIME-applications.git`
2. Initialize submodule.<br>
  `$ cd FWIME-applications && git submodule update --init -- external/containers`
3. Pull singularity image.<br>
  `$ cd external/containers && git lfs pull --include wave/wave-2d_cuda10.0_sep.sif --exclude "" && cd -`
4. Set your DATAPATH environment variable.
  `$ export DATAPATH=<YOUR_DATA_PATH>`
5. Run singularity shell.<br>
  `$ ./run_singularity_jupyter.sh`

---
# Abstract of manuscript submitted to Geophysics
## Full waveform inversion by model extension: practical applications
Producing reliable acoustic subsurface velocity models still remains the main bottleneck of the oil and gas industry's traditional imaging sequence. In complex geological settings, the output of conventional ray-based or wave-equation-based tomographic methods may not be accurate enough for full waveform inversion (FWI) to converge to a geologically satisfactory Earth model. In a complementary paper, we presented the theoretical framework of our new method referred to as full waveform inversion by model extension (FWIME) in which a wave-equation migration velocity analysis (WEMVA) technique is efficiently paired with a modified version of FWI. We claim that our method is able to converge to accurate solutions without the use of a good initial guess or low-frequency energy. In this paper, we demonstrate the potential of our method on five realistic and challenging numerical examples that simulate complex geological scenarios encountered in hydrocarbon exploration. We guide the reader step by step throughout the optimization process. We show that our method can simultaneously invert all wave types with the same simple mechanism and without the need for a user-intensive hyper-parameter tuning process. In addition, we provide a fully-reproducible open-source software solution implemented with general-purpose graphics processing units (GPU) and with a user-friendly Python interface.

---
# Useful references from the authors
* Barnier, G., 2022, Full waveform inversion by model extension: a robust method to estimate the seismic propagation velocity in the subsurface from seismic recordings: Ph.D. thesis, Stanford University ([link](http://sepwww.stanford.edu/data/media/public/sep/gbarnier/Guillaume_thesis_sep_website.pdf))
* Biondi, E., G. Barnier, R. G. Clapp, F. Picetti, and S. Farris, 2021, An object-oriented optimization framework for large-scale inverse problems: Computers & Geosciences, 154, 104790 ([link](https://www.sciencedirect.com/science/article/pii/S0098300421000935))
* Barnier, G., and E. Biondi, 2020, Full waveform inversion by model extension using a model-space multi-scale approach, in SEG Technical Program Expanded Abstracts 2020: Society of Exploration Geophysicists, 646–650 ([link](https://library.seg.org/doi/abs/10.1190/segam2020-3428421.1))
* Barnier, G., E. Biondi, and R. Clapp, 2019, Waveform inversion by model reduction using spline interpolation: Presented at the SEG International Exposition and Annual Meeting, OnePetro ([link](https://library.seg.org/doi/abs/10.1190/segam2019-3216866.1))
* Barnier, G., E. Biondi, and B. Biondi, 2018, Full waveform inversion by model extension, in SEG Technical Program Expanded Abstracts 2018: Society of Exploration Geophysicists, 1183–1187 ([link](https://library.seg.org/doi/10.1190/segam2018-2998613.1))

---
# About the authors
* [**Guillaume Barnier**](https://www.linkedin.com/in/guillaume-barnier/)
    * Ph.D. student at Stanford University in the Stanford Exporation Project (SEP) group
    * Research interests: seismic imaging, velocity model building, optimization of large-scale non-convex inverse problems, and machine learning
    * Guillaume's [personal website](https://gbarnier.github.io) and [google scholar page](https://scholar.google.com/citations?user=zZ_LA8IAAAAJ&hl=en)
* [**Ettore Biondi**](https://www.linkedin.com/in/ettore-biondi/)
    * Postdoctoral Researcher at California Institute of Technology in its Seismological Laboratory working within Professor Zhongwen Zhan's research group
    * Former Ph.D. student at Stanford University in the Stanford Exporation Project (SEP) group
    * Passionate about geophysics, computer science, chemistry, and Earth science
    * Ettore's [personal page](http://www.seismolab.caltech.edu/biondi_e.html) and [google scholar page](https://scholar.google.com/citations?user=Kzl0lcYAAAAJ&hl=en&oi=sra)
* [**Stuart Farris**](https://www.linkedin.com/in/stuart-farris/)
    * Ph.D. student at Stanford University in the Stanford Exporation Project (SEP) group
    * Research interests: Carbon sequestration, machine learning, velocity model building using deep learning, seismic imaging, and inverse problems
    * Currently a part-time AI resident at [X Development](https://x.company)

---
# Useful links
* Our YouTube channel [egoptimization](https://www.youtube.com/channel/UCjloQO0H6JnddXoB017mcog)
* Stanford Exploration project (SEP) [website](https://sep.sites.stanford.edu) and [YouTube channel](https://www.youtube.com/channel/UCk8h7bfpd-vl_CWCDLHxHzA)
* Ettore's Ph.D. [thesis](http://sepwww.stanford.edu/data/media/public/sep/ettore/pdfs/thesis/thesis_Ettore.pdf) and Ph.D. [defense](https://www.youtube.com/watch?v=cmhhm4HW070&t=2645s) at Stanford University
* Guillaume's Ph.D. [thesis](http://sepwww.stanford.edu/data/media/public/sep/gbarnier/Guillaume_thesis_sep_website.pdf) and Ph.D. [defense](https://www.youtube.com/watch?v=vv9krmVRkMo&t=2309s) at Stanford University
