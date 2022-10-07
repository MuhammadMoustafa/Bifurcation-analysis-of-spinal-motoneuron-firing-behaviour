## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

###### CaD2en ######
# CaD2en ###
## L Type Channels ###
CaD2_gb=act_chan(CaDen_Max)
CaD2_e=60
CaD2_thtm=-43
CaD2_kapm=-6
CaD2_Ot=10
CaD2_Ot2=50
CaD2_Wt_d=1200
CaD2_tilon=1
CaD2_AranG=0.5
CaD2_WG=1
CaD2_Wth=0.27

## Ca activate K Channels ###
CaD2_gkb=act_chan(CaDen_Max*0.41)
CaD2_nexp=10
CaD2_kd=0.0005
CaD2_St=40

## Calcium Dynamics ###
CaD2_caio=0.0001
CaD2_f=0.01
CaD2_alpha=1
CaD2_kca=8
CaD2_ek=-80
##############
CaD2_Of=1/(1+expmod((vd2-CaD2_thtm)/CaD2_kapm))
CaD2_Wf=1/(1+expmod(-(vd2+57)/0.8))
CaD2_Wt=50+(1150/CaD2_WG)/(1+expmod((vd2+32)/7))
CaD2_Sf=(1/((CaD2_kd/(CaD2_cai-0.00001))^CaD2_nexp+1))
CaD2_df=d_Flag(CaD2_Of-CaD2_O)
tRandG2=0
CaD2_tauC=(CaD2_Wt_d*(1-(0.76*tRandG2)))-CaD2_Wt
CaD2_Wt2=CaD2_tauC*CaD2_df
#######################

######################
##### Currents #######
CaD2_g=CaD2_gb*((CaD2_O)*(CaD2_AranG*0.3+1))
CaD2_gkca=CaD2_S
CaD2_gk=CaD2_gkb*CaD2_gkca

Id2CaD2Ca=CaD2_g*(vd2-CaD2_e)
Id2CaD2K=CaD2_gk*(vd2-CaD2_ek)
Id2CaD2=Id2CaD2Ca+Id2CaD2K
######################

######################
##### equations ######
dCaD2_O/dt=(CaD2_Of-CaD2_O)*tauFunc(CaD2_tilon,CaD2_W,CaD2_df,CaD2_Wth)/(CaD2_Ot+CaD2_Ot2*CaD2_df)
dCaD2_W/dt=((CaD2_Wf*(1-CaD2_df))-CaD2_W)/(CaD2_Wt+CaD2_Wt2)
dCaD2_S/dt=(CaD2_Sf-CaD2_S)/CaD2_St
dCaD2_cai/dt=CaD2_f*(-(CaD2_alpha*(Id2CaD2Ca))-(CaD2_kca*CaD2_cai))
######################

######################
#### init values #####
init CaD2_O=0.0109869, CaD2_W=8.76425e-8, CaD2_cai=0.0001, CaD2_S=0
######################
#done