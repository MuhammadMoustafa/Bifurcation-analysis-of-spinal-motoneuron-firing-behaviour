## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

##### Dendrite 2 #####
## length = 1366.26402
d2Len=754.842*1.81*10^(-4)
d2Diam=36.4297*10^(-4)
d2Area=Area(d2Len,d2Diam)
d2CArea=CArea(d2Diam)
d2GPas=1/11000
d2EPas=-70

### Ion Channels ####
#####################################
#include dend2_CaDen.inc
######################

######################
##### Currents #######
Id2L=d2GPas*(vd2-d2EPas)
Id2Ion=Id2L+Id2CaD2
Id2Comp=1/d2Area*(G_d1_d2*(vd1-vd2)+G_d2_d3*(vd3-vd2))
Id2=Id2Comp-Id2Ion

######################
### state equations ####
######################

######################
#### init values #####
init vd2=-70
######################

#done