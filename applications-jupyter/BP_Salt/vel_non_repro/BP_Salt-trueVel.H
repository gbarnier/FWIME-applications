n1=215 o1=0.0 d1=1.0 label1='Undefined'
n2=840 o2=0.0 d2=1.0 label2='Undefined'
in='/net/friday/scr3/gbarnier/bpSaltNew-mask1.H@'
data_format='xdr_float'
esize=4
o1=0.0 o2=0.0 o3=0.0 d1=0.04 d2=0.04 d3=0.04


/opt/SEP/SEP7.0/bin/Math:   gbarnier@thanos   Wed Jul 21 10:54:41 2021
		sets next: in="/net/friday/scr1/gbarnier/revMaskTemp.H@"
		esize=4
	#Using (file1-1.0)^2 to produce real data

		#file1="vel/bpSaltNew-mask1.H"
		data_format="xdr_float"


/opt/SEP/SEP7.0/bin/Math:   gbarnier@thanos   Wed Jul 21 10:54:41 2021
		sets next: in="/net/friday/scr1/gbarnier/sedNoSalt.H@"
		esize=4
	#Using file1*file2 to produce real data

		#file1="revMaskTemp.H"
		#file2="vel/bpSaltNew-trueSed.H"
		data_format="xdr_float"


Add:   gbarnier@thanos   Wed Jul 21 10:54:42 2021
		sets next: in="./vel_non_repro/BP_Salt-trueVel.H@"
		esize=4
	#Using (1.000000000000*(file1+0.000000000000))+(1.000000000000*(file2+0.000000000000)) to produce real data

		#file1="sedNoSalt.H"
		#file2="scaleSalt.H"
		data_format="xdr_float"
