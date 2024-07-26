import numpy as np
import matplotlib.pyplot as plt
from sympy import symbols, Eq
from IPython.display import display, Latex
t,v,u=np.loadtxt('7exercise4.txt',skiprows=3,unpack=True)
def LineFit(x, y):
    xavg = x.mean()
    slope = (y*(x-xavg)).sum()/(x*(x-xavg)).sum()
    yint = y.mean()-slope*xavg
    return slope, yint
def LineFitWt(x,y,dy=1):
    xavg=x.mean()
    slope=((y*(x-xavg)/(dy*dy)).sum())/((x*(x-xavg)/(dy*dy)).sum())
    yint=y.mean()-slope*xavg
    return slope,yint
def rchi2(x,y,f,dy=1): return (((y-f(x))/dy)**2).sum()
#1.-
slope1,yint1=LineFit(t,v)
slope2,yint2=LineFitWt(t,v)
f1=np.poly1d([slope1,yint1])
f2=np.poly1d([slope2, yint2])
print("LineFit(x,y) y=",f1)
print("LineFitWt(x,y) y=",f2)
print("Xr^2:",round(rchi2(t,v,f2,u)/(len(t)-2),3))
display(Latex(r"$X_r^2$:"), round(rchi2(t,v,f2,u)/(len(t)-2),3))