## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

####### soma ########
sLen=48.8*10^(-4)
sDiam=48.8*10^(-4)
sArea=Area(sLen,sDiam)
sCArea=CArea(sDiam)
sGPas=1/225
sEPas=-70
######################
##### Ion Channels ###
#include soma_NafSmb1.inc
#include soma_KdrSmb1.inc
#include soma_CaSmb1.inc
######################

######################
##### Currents #######
IsL=sGPas*(vs-sEPas)
IsIon=IsL+IsNas+IsKdr+IsCa
IsComp=1/sArea*(G_S_Ah*(vah-vs)+G_S_d0*(vd0-vs))
Is=IsComp-IsIon
######################

######################
##### equations ######
# dvs/dt=(I/sArea+Is)/CM    Written in the main File
######################

######################
#### init values #####
init vs=-70
######################

#done