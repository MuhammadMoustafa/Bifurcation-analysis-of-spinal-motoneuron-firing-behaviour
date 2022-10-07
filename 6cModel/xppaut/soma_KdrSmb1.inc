## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

### KdrSmb1
Kdr_gb=act_chan(0.80048)
Kdr_tn=5
Kdr_tht=20
Kdr_kap=-15
Kdr_e=-80

Kdr_g=Kdr_gb*Kdr_n^(4)
Kdr_nt=(Kdr_tn*tadj)/(expmod((v2+40)/40)+expmod(-(v2+40)/50))
Kdr_nf=1/(1+expmod((v2+Kdr_tht)/Kdr_kap))
########################

######################
##### Currents #######
IsKdr=Kdr_g*(vs-Kdr_e)
######################

######################
##### equations ######
dKdr_n/dt=(Kdr_nf-Kdr_n)/Kdr_nt
######################

######################
#### init values #####
init Kdr_n=0.0649692
######################

#done
