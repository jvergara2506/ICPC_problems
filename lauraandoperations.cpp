#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,aa=0,bb=0,cc=0; cin>>a>>b>>c;
    if (((b-c)%2)==0) aa=1;
    if (((a-c)%2)==0) bb=1;
    if (((a-b)%2)==0) cc=1;
    cout<<aa<<" "<<bb<<" "<<cc<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}