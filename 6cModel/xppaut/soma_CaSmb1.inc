## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

## CaSmb1
#### N Type ###
Ca_gnb=act_chan(0.01)
Ca_tmn=15
Ca_thtmn=14

Ca_thn=50
Ca_ththn=32
#### L Type ###
Ca_glb=act_chan(0)
mlexp= 1
Ca_tml=400
Ca_thtml=45.8
kml=-3.7

### Ca activated K
Ca_gkb=act_chan(0.0221)
Ca_nexp=1
Ca_kd=0.0005

cao=2
f=0.01
alpha=1
kca=8

Ca_ek=-80
Ca_v2=vs-vtraub

Ca_e=130
Ca_gn=Ca_gnb*Ca_mn^(2)*Ca_hn
Ca_gl=Ca_glb*(Ca_ml^mlexp)
Ca_gk=Ca_gkb*((CaI^Ca_nexp)/((CaI^Ca_nexp)+Ca_kd))

Ca_mnt=Ca_tmn*tadj
Ca_mnf=1/(1+exp((Ca_v2+Ca_thtmn)/(-5)))

Ca_hnt=Ca_thn*tadj
Ca_hnf=1/(1+exp((Ca_v2+Ca_ththn)/5))

Ca_mlt=Ca_tml*tadj
Ca_mlf=1/(1+exp((Ca_v2+Ca_thtml)/kml))
######################

######################
##### Currents #######
IsCaN=Ca_gn*(vs-Ca_e)
IsCaL=Ca_gl*(vs-Ca_e)
IsCaK=Ca_gk*(vs-Ca_ek)
IsCa=IsCaN+IsCaL+IsCaK
######################

######################
##### equations ######
dCa_mn/dt=(Ca_mnf-Ca_mn)/Ca_mnt
dCa_hn/dt=(Ca_hnf-Ca_hn)/Ca_hnt
dCa_ml/dt=(Ca_mlf-Ca_ml)/Ca_mlt
dCaI/dt=f*(-(alpha*(IsCaN+IsCaL))-(kca*CaI))
######################

######################
#### init values #####
init Ca_mn=0.000101029,Ca_hn=0.996316,Ca_ml=0.0210859,CaI=0.0001
######################

#done