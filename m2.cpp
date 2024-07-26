#include <bits/stdc++.h>
using namespace std;
const double pi=acos(-1);

int main(){
    int t; cin>>t;
    while (t--){
        int l,r; cin>>l>>r;
        double b=2*r/l;
        double x=(-b+sqrt(b*b+8))/4;
        cout<<fixed<<setprecision(6)<<asin(x)+pi/2<<endl;
    }
}