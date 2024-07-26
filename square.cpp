#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a; cin>>b; cin>>c; cin>>d;
    if (a==b || c==d){
        cout<<"No"<<endl;
        return;
    }
    int x,y,w,z;
    x=max(a,b); y=max(c,d);
    w=min(a,b); z=min(c,d);
    if (x==y && w+z==x) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}