## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

##### KdrIsb1 ###########
KI_gb=act_chan(0.16552)
KI_e=-80.0
KI_tht=20
KI_kap=-15
KI_tn=5

KI_g=KI_gb*KI_n^(4)

## subtract vtraub which is equal -10 not vtraub2
KI_v2=vah-vtraub

KI_nt=(KI_tn*tadj20)/(exp((KI_v2+40)/40)+exp(-(KI_v2+40)/50))
KI_nf=1/(1+exp((KI_v2+KI_tht)/KI_kap))
########################################

######################
##### Currents #######
IahKI=KI_g*(vah-KI_e)
######################

#### state equations ####
dKI_n/dt=(KI_nf-KI_n)/KI_nt
######################

#### init values #####
init KI_n=0.0649692
######################

#done