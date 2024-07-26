#include <bits/stdc++.h>
using namespace std;
const double pi=acos(-1);

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin>>n;
    while (n--){
        int l,r; cin>>l>>r;
        long double a=1;
        long double VV=(l*pi*cos(a)/3)*(3*r*l*cos(a)+l*l*sin(2*a))-(l*pi*sin(a)/3)*(3*r*r+3*r*l*sin(a)+l*l*sin(a)*sin(a));
        long double VVV=(l*pi*cos(a)/3)*(-3*r*l*sin(a)+2*l*l*cos(2*a))+(3*r*l*cos(a)+l*l*sin(2*a))*(-l*pi*sin(a)/3)+(-l*pi*sin(a)/3)*(3*r*l*cos(a)+l*l*sin(2*a))+(3*r*r+3*r*l*sin(a)+l*l*sin(a)*sin(a))*(-l*pi*cos(a)/3);
        while (fabs(VV)>1e-4){
            a-=fmod(VV/VVV,2*pi);
            VVV=(l*pi*cos(a)/3)*(-3*r*l*sin(a)+2*l*l*cos(2*a))+(3*r*l*cos(a)+l*l*sin(2*a))*(-l*pi*sin(a)/3)+(-l*pi*sin(a)/3)*(3*r*l*cos(a)+l*l*sin(2*a))+(3*r*r+3*r*l*sin(a)+l*l*sin(a)*sin(a))*(-l*pi*cos(a)/3);
            VV=(l*pi*cos(a)/3)*(3*r*l*cos(a)+l*l*sin(2*a))-(l*pi*sin(a)/3)*(3*r*r+3*r*l*sin(a)+l*l*sin(a)*sin(a));
        }
        cout<<fixed<<setprecision(8)<<fmod(a+pi/2,2*pi)<<endl;
    }   
}