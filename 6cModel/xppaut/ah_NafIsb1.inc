## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

######## NafIsb1 ######
NaI_gb=act_chan(1.3392)
NaI_e=50.0
NaI_amA=18
NaI_bmA=38
NaI_th=40
NaI_tht=47
NaI_kap=7

NaI_g=NaI_gb*NaI_m^(3)*NaI_h

Ah_v2=vah-vtraub
Ah_v22=vah-vtraub2

NaI_a=0.4*vtrap(NaI_amA-Ah_v22,5)
NaI_b=0.4*vtrap(Ah_v22-NaI_bmA,5)

NaI_mt=1/(NaI_a+NaI_b)/tadj20
NaI_mf=NaI_a/(NaI_a+NaI_b)

NaI_ht=(NaI_th*tadj20)/(exp((Ah_v2+50)/15)+exp(-(Ah_v2+50)/16))
NaI_hf=1/(1+exp((Ah_v2+NaI_tht)/NaI_kap))

########################################

######################
##### Currents #######
IahNaI=NaI_g*(vah-NaI_e)
######################

#### state equations ####
dNaI_m/dt=(NaI_mf-NaI_m)/NaI_mt
dNaI_h/dt=(NaI_hf-NaI_h)/NaI_ht
######################

######################
#### init values #####
init NaI_m=0.0131252, NaI_h=0.864964
######################

#done