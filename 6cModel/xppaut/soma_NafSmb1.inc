## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

##### NafSmb1
NaS_gb=act_chan(0.06)
NaS_amA=22
NaS_bmA=46
NaS_th=40
NaS_tht=47
NaS_kap=7
NaS_e=50

NaS_g=NaS_gb*NaS_m^(3)*NaS_h
v2=vs-vtraub
v22=vs-vtraub2

Nas_a=0.4*vtrap(NaS_amA-v22,5)
Nas_b=0.4*vtrap(v22-NaS_bmA,5)

Nas_mt=1/(Nas_a+Nas_b)/tadj
Nas_mf=Nas_a/(Nas_a+Nas_b)

Nas_ht=(NaS_th*tadj)/(expmod((v2+50)/15)+expmod(-(v2+50)/16))
Nas_hf=1/(1+expmod((v2+NaS_tht)/NaS_kap))
#######################

######################
##### Currents #######
IsNas=NaS_g*(vs-NaS_e)
######################

######################
##### equations ######
dNas_m/dt=(Nas_mf-Nas_m)/Nas_mt
dNas_h/dt=(Nas_hf-Nas_h)/Nas_ht
######################

######################
#### init values #####
init Nas_m=0.00590903, Nas_h=0.864964
######################

#done