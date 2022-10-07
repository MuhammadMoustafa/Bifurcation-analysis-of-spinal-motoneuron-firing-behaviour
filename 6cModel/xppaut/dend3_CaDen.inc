## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

####### CaD3en ######
## CaD3en ###
### L Type Channels ###
CaD3_gb=act_chan(CaDen_Max*0.25)
CaD3_e=60
CaD3_thtm=-43
CaD3_kapm=-6
CaD3_Ot=10
CaD3_Ot2=50
CaD3_Wt_d=1200
CaD3_tilon=1
CaD3_AranG=0.5
CaD3_WG=1
CaD3_Wth=0.27

## Ca activate K Channels ###
CaD3_gkb=act_chan(CaDen_Max*0.41*0.25)
CaD3_nexp=10
CaD3_kd=0.0005
CaD3_St=40

## Calcium Dynamics ###
CaD3_caio=0.0001
CaD3_f=0.01
CaD3_alpha=1
CaD3_kca=8
CaD3_ek=-80
##############
CaD3_Of=1/(1+expmod((vd3-CaD3_thtm)/CaD3_kapm))
CaD3_Wf=1/(1+expmod(-(vd3+57)/0.8))
CaD3_Wt=50+(1150/CaD3_WG)/(1+expmod((vd3+32)/7))
CaD3_Sf=(1/((CaD3_kd/(CaD3_cai-0.00001))^CaD3_nexp+1))
CaD3_df=d_Flag(CaD3_Of-CaD3_O)
tRandG3=0
CaD3_tauC=(CaD3_Wt_d*(1-(0.76*tRandG3)))-CaD3_Wt
CaD3_Wt2=CaD3_tauC*CaD3_df
######################

######################
##### Currents #######
CaD3_g=CaD3_gb*((CaD3_O)*(CaD3_AranG*0.3+1))
CaD3_gkca=CaD3_S
CaD3_gk=CaD3_gkb*CaD3_gkca

Id3CaD3Ca=CaD3_g*(vd3-CaD3_e)
Id3CaD3K=CaD3_gk*(vd3-CaD3_ek)
Id3CaD3=Id3CaD3Ca+Id3CaD3K
######################


######################
##### state equations ####
dCaD3_O/dt=(CaD3_Of-CaD3_O)*tauFunc(CaD3_tilon,CaD3_W,CaD3_df,CaD3_Wth)/(CaD3_Ot+CaD3_Ot2*CaD3_df)
dCaD3_W/dt=((CaD3_Wf*(1-CaD3_df))-CaD3_W)/(CaD3_Wt+CaD3_Wt2)
dCaD3_S/dt=(CaD3_Sf-CaD3_S)/CaD3_St
dCaD3_cai/dt=CaD3_f*(-(CaD3_alpha*(Id3CaD3Ca))-(CaD3_kca*CaD3_cai))
######################

######################
#### init values #####
init CaD3_O=0.0109869, CaD3_W=8.76425e-8, CaD3_cai=0.0001, CaD3_S=0
######################

#done