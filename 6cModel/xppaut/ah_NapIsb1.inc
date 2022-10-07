## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

######## NapIsb1 ######
NaP_gb=act_chan(3.2971e-5)
NaP_e=50.0
vtraub1=10
NaP_ampA=0.01
NaP_ampB=30.4
NaP_ampC=5
NaP_bmpA=0.00025
NaP_bmpB=34.7
NaP_bmpC=5

NaP_g=NaP_gb*NaP_mp^(3)

tadj1=2.2^((TEMP-20)/10)
NaP_v1=vah-vtraub1
NaP_a=vtrap1(NaP_v1,NaP_ampA,NaP_ampB,NaP_ampC)
NaP_b=vtrap2(NaP_v1,NaP_bmpA,NaP_bmpB,NaP_bmpC)
NaP_mpt=1/(NaP_a+NaP_b)/tadj1
NaP_mpf=NaP_a/(NaP_a+NaP_b)
#########################

######################
##### Currents #######
IahNaP=NaP_g*(vah-NaP_e)
######################

#### state equations ####
dNap_mp/dt=(Nap_mpf-Nap_mp)/Nap_mpt
######################

######################
#### init values #####
init NaP_mp=0.00214921
######################

#done