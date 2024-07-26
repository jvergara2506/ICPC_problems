#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x1,y1,x2,y2,x11,y11,x22,y22; cin>>x1>>y1>>x2>>y2>>x11>>y11>>x22>>y22;
    if (max(x1,x11)<min(x2,x22) && max(y1,y11)<min(y2,y22)) 
    cout<<max(x1,x11)<<" "<<max(y1,y11)<<" "<<min(x2,x22)<<" "<<min(y2,y22);
    else cout<<"No Overlap";
    cout<<endl;
}

int main(){
    int t; cin>>t; while (t--){
        solve();
        if (t>0) cout<<endl;
    }
}