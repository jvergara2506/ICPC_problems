#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n; cin>>n;
    vector<long long>val(n);
    vector<long long>val2(n);
    map<pair<long long, long long>, long long>mp;
    for (int i=0; i<n; i++){
        cin>>val[i]>>val2[i];
        mp[{val[i], val2[i]}]=1;
    }
    for (int i=0; i<n; i++){
        for (int j=val[i]; j<=val2[i]; j++){
            if (val[i]==val2[i]){
                cout<<val[i]<<" "<<val2[i]<<" "<<val[i]<<endl;
            }
            if (mp[{val[i], j-1}]==1 && mp[{j+1, val2[i]}]==1){
                cout<<val[i]<<" "<<val2[i]<<" "<<j<<endl;
            }
            if (j==val[i] && mp[{j+1, val2[i]}]==1 || j==val2[i] && mp[{val[i], j-1}]==1){
                cout<<val[i]<<" "<<val2[i]<<" "<<j<<endl;
            }
        }
    }
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}