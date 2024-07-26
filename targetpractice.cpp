#include <bits/stdc++.h>

using namespace std;

void solve(){
    string aro[10];
    for(int i=0; i<10; i++) cin>>aro[i];
    int ans=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(aro[i][j]=='X'){
                int ii=2*i;
                int jj=2*j;
                jj = abs(jj-9);
                ii = abs(ii-9);
                int pts=max(jj, ii);
                ans+=6-((pts+1)/2);
            }
        }
    }
    cout<<ans<<"\n";
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}