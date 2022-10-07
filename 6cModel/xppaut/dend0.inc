## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

##### Dendrite 0 #####
d0Len=1450.97*10^(-4)
d0Diam=42.2188*10^(-4)
d0Area=Area(d0Len,d0Diam)
d0CArea=CArea(d0Diam)
d0GPas=1/11000
d0EPas=-70
######################

######################
##### Ion Channels ###
######################

######################
##### Currents #######
Id0L=d0GPas*(vd0-d0EPas)
Id0Ion=Id0L
Id0Comp=1/d0Area*(G_S_d0*(vs-vd0)+G_d0_d1*(vd1-vd0))
Id0=Id0Comp-Id0Ion
######################

######################
#### init values #####
init vd0=-70
######################
#done