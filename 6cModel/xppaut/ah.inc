## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

#### Axon Hillock ####
ahLen=20*10^(-4)
ahDiam=12.94999838*10^(-4)
ahArea=Area(ahLen,ahDiam)
ahCArea=CArea(ahDiam)
ahGPas=1/225
ahEPas=-70
######################

########## Axon Hilloc Channels ########
########################################
#include ah_NafIsb1.inc
#include ah_NapIsb1.inc
#include ah_KdrIsb1.inc
########################################

##### Currents #######
IahL=ahGPas*(vah-ahEPas)
IahIon=IahL+IahKI+IahNaP+IahNaI
IahComp=1/ahArea*(G_S_Ah*(vs-vah))
Iah=IahComp-IahIon
######################

######################
#### state equations ####
# dvah/dt=(Iah)/CM
######################

######################
#### init values #####
init vah=-70
######################

#done