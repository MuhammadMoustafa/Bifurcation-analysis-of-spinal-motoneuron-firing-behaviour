## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

##### Dendrite 3 #####
## length = 1878.6171
d3Len=1037.91*1.81*10^(-4)
d3Diam=10.1901*10^(-4)
d3Area=Area(d3Len,d3Diam)
d3CArea=CArea(d3Diam)
d3GPas=1/11000
d3EPas=-70

##### Ion Channels ####
######################
#include dend3_CaDen.inc
######################

######################
##### Currents #######
Id3L=d3GPas*(vd3-d3EPas)
Id3Ion=Id3L+Id3CaD3
Id3Comp=1/d3Area*(G_d2_d3*(vd2-vd3))
Id3=Id3Comp-Id3Ion
######################

######################
##### state equations ####
######################

######################
#### init values #####
init vd3=-70
######################
#done