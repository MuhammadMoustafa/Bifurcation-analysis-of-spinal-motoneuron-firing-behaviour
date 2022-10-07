## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

##### Dendrite 1 #####
d1Len=1450.97*10^(-4)
d1Diam=42.2188*10^(-4)
d1Area=Area(d1Len,d1Diam)
d1CArea=CArea(d1Diam)
d1GPas=1/11000
d1EPas=-70

######################
##### Ion Channels ###
######################

######################
##### Current ####
Id1L=d1GPas*(vd1-d1EPas)
Id1Ion=Id1L
Id1Comp=1/d1Area*(G_d0_d1*(vd0-vd1)+G_d1_d2*(vd2-vd1))
Id1=Id1Comp-Id1Ion
######################

######################
#### init values #####
init vd1=-70
######################
#done