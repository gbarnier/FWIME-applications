No input header

Su2sep:   yishen@gertie   Fri Nov 22 17:40:43 2013
		sets next: in="/data1/WG_BP2004Q_distribution/model/WG_BP_Vp.H@"
		junkME=0
		hff="/data1/WG_BP2004Q_distribution/model/WG_BP_Vp.H@@"
		same_record_number=1
	 	n2=1 o2=1 d2=1 label2="trace number"

n3=1 n4=1 n5=1 n6=1 n7=1 n8=1 n9=1

	n1=1911  o1=0.000000  d1=0.006250   label1="none"   unit1="none"
		gff="-1"
		esize=4
		data_format="xdr_float"
		junkME=0
		same_record_number=1
	 	n2=15749 o2=1 d2=1 label2="trace number"

n3=1 n4=1 n5=1 n6=1 n7=1 n8=1 n9=1

	n1=1911  o1=0.000000  d1=0.006250   label1="none"   unit1="none"
		gff="-1"
		esize=4


Cp:   gbarnier@storm.stanford.edu   Wed Jan 29 18:08:27 2020
		sets next: in="/net/storm/scr1/gbarnier/true_whole_bp.H@"
		copy_intag="/data1/WG_BP2004Q_distribution/model/WG_BP_Vp.H"
		hff="junk.H"
		data_format="xdr_float"
o2=0.0 d2=0.00625 label2='x [km]' label1='z [km]' hff=-1


Window3d:   gbarnier@friday   Sun Feb 16 18:18:46 2020
		sepstr_ready_out() : sets next in="stdin"
#Window #f1=0  #j1=1 #n1=816
#Window #f2=9360  #j2=1 #n2=4160
		junkME=0
	n2=4160  o2=58.500000  d2=0.006250   label2="x [km]"   unit2="Undefined"
		gff="-1"
		hff="-1"
hff=-1 gff=-1  n9=1
	n1=816  o1=0.000000  d1=0.006250   label1="z [km]"   unit1="none"
		hff="-1"
		gff="-1"
		esize=4
		data_format="xdr_float"


Pad:   gbarnier@friday   Sun Feb 16 18:18:46 2020
		sepstr_ready_out() : sets next in="stdin"
	 	n1=896 o1=-0.5 d1=0.00625 label1=""

		#beg=80
	 	n2=4660 o2=55.375 d2=0.00625 label2=""

		#beg=500
		data_format="xdr_float"


Interp:   gbarnier@friday   Sun Feb 16 18:18:46 2020
		sets next: in="/net/friday/scr3/gbarnier/temp1.H@"
	sinc interpolation with 10 points
	n1=140 o1=-0.500000 d1=0.040000
	n2=728 o2=55.375000 d2=0.040000
		data_format="xdr_float"



Math:   gbarnier@friday   Sun Feb 16 18:18:47 2020
		sets next: in="/net/friday/scr3/gbarnier/temp2.H@"
		esize=4
	#Using file1/1000 to produce real data

		#file1="temp1.H"
		data_format="xdr_float"


/opt/SEP/SEP7.0/bin/Clip:   gbarnier@friday   Sun Feb 16 18:18:47 2020
		sets next: in="./vel_non_repro/BP_North_Sea-initVel1.H@"
		clip=1.5
		chop="l"
		to="clip"
		data_format="xdr_float"
o1=0.0 o2=0.0
