## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##


#### Connect Compartments ###
R_S_Ah=Ra*(0.5*sLen/sCArea+0.5*ahLen/ahCArea)
G_S_Ah=1/R_S_Ah

R_S_d0=Ra*(0.5*d0Len/d0CArea)
G_S_d0=1/R_S_d0

R_d0_d1=Ra*(0.5*d0Len/d0CArea+0.5*d1Len/d1CArea)
G_d0_d1=1/R_d0_d1

R_d1_d2=Ra*(0.5*d1Len/d1CArea+0.5*d2Len/d2CArea)
G_d1_d2=1/R_d1_d2

R_d2_d3=Ra*(0.5*d2Len/d2CArea+0.5*d3Len/d3CArea)
G_d2_d3=1/R_d2_d3

#done