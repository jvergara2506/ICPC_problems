#include <bits/stdc++.h>
using namespace std;
const double pi=acos(-1);

int main(){
    double l,r,theta; cin>>l>>r>>theta;
    double alpha=theta-pi/2;
    double h=l*cos(alpha), r1=r, r2=l*sin(alpha)+r;
    cout<<fixed<<setprecision(9)<<(pi*h/3)*(r1*r1+r2*r2+r1*r2)<<endl;
}