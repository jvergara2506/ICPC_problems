#include <bits/stdc++.h>
using namespace std;

void solve(){
    double x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    double m1=(y2-y1)/(x2-x1), m2=(y3-y4)/(x3-x4);
    double b1=y1-m1*x1, b2=y3-m2*x3;
    if (m1==m2 && b1==b2) cout<<"LINE"<<endl;
    else if (m1==m2 && b1!=b2) cout<<"NONE"<<endl;
    else{
        double ix=(b2-b1)/(m1-m2);
        double iy=m1*ix+b1;
        cout<<"POINT "<<fixed<<setprecision(2)<<ix<<" "<<iy<<endl;
    }
}

int main(){
    int t; cin>>t;
    cout<<"INTERSECTING LINES OUTPUT"<<endl;  
    while (t--) solve();
    cout<<"END OF OUTPUT"<<endl;
}