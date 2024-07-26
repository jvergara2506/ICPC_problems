#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14159265358979323846;

int main(){
    int d,h,v,e; cin>>d>>h>>v>>e;
    double vol=pi*d*d*h/4;
    double sube=(pi*d*d/4)*e;
    if (sube>=v) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl<<fixed<<setprecision(8)<<vol/(v-sube)<<endl;
    }
}