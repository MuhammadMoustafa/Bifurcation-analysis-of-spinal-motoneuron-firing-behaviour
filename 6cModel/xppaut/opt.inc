## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

@ xlo=0,xhi=4000,ylo=-90,yhi=50
@ dt=0.025
@ but=fit:wf
@ but=int:ig
@ but=intl:il
@ but=auto:fa
@ OUTPUT=../simulations/xpp.dat
@ meth=backeul
@ total=4000
@ parmax=1, parmin=-10, AUTOXMIN=-0.1, AUTOXMAX=1.1, AUTOYMIN=-90, AUTOYMAX=20
@ NPR=100000, NMAX=10000000
@ NTST=100
@ DSMAX=0.1

# increaseing parmax, NTST, can solve MX problem
# increasing NORMMAX, NMAX can solve EP 

#done