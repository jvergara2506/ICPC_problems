#include <bits/stdc++.h>
using namespace std;
const double pi=acos(-1);

int main(){
    double l,r, theta; cin>>l>>r>>theta;
    double alpha=theta-pi/2;
    double r1=r, r2=r+l*sin(alpha), h=l*cos(alpha);
    cout<<(r1+r2)*h/2<<endl;
}