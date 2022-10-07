## ********************************************************** ##
# Author:       Muhammad Ahmad
# Email:        muhammadmoustafa@eng1.cu.edu.eg
# Affiliation:  Systems and Biomedical Engineering Department
#               Faculty of Engineering
#               Cairo University
## ********************************************************** ##

### functions ###
Area(l,diam)=pi*l*diam
CArea(diam)=0.25*pi*diam^(2)
dAtx(d0,df,x)=d0+x*(df-d0)
F_Area(r1,r2,h)=pi*(r1+r2)*((r1-r2)^(2)+h^(2))^(0.5)
expmod(x)=if(x<(-100))then(0)else(exp(x))
vtrap(x,y)=if(abs(x/y) < 1e-6)then(y*(1 - x/y/2))else(x/(expmod(x/y) - 1))
vtrap1(x,a,b,c)=if(abs((x+b)/c)< 1e-6)then(a*c)else((a*(x+b))/(1-exp(-(x+b)/c)))
vtrap2(x,a,b,c)=if(abs((x+b)/c)< 1e-6)then(-a*c)else((a*(-(x+b)))/(1-exp((x+b)/c)))
tauFunc(tail,w,df,wth)=0.001+0.999/(1+exp((tail*w*df-wth)/0.006))
act_chan(x)=if(isActive)then(x)else(0)
d_Flag(x)=1/(1+expmod(5000*(x+0.01)))

#done