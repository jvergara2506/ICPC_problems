#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> val(3);
    for (int i=0; i<3; i++) cin>>val[i];
    int dif=abs(val[0]-val[1]);
    int maxi=max(val[1],val[0]);
    int mini=min(val[1],val[0]);
    bool u=true;
    if (val[0]==val[1]){
        cout<<0<<endl;
        u=false;
    } 
    if (dif<=val[2] & u==true) cout<<1<<endl;
    int r=1;
    if (dif>val[2] & u==true){
        while(maxi-mini>val[2]*2){
            maxi-=val[2];
            mini+=val[2];
            r+=1;
        }
    cout<<r<<endl;
    }
}

int main(){
    int t; cin>>t;
    while (t--){
        solve();
    }
}