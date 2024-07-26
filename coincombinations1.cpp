#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int main(){
    int n,x; cin>>n>>x; vector<int>cs(n);
    for (auto& i:cs) cin>>i;
    vector<int>res(x+10);
    res[0]=1;
    for (int i=0; i<=x; i++){
        for (int j=0; j<n; j++){
            if (cs[j]>i) continue;
            res[i]=(res[i]+res[i-cs[j]])%mod;
        }
    }
    cout<<(res[x])%mod<<endl;
}