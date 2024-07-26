#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int main(){
    int n,x; cin>>n>>x; vector<int>cs(n);
    for (auto& i:cs) cin>>i;
    vector<int>res(x+10);
    res[0]=1;
    for (int i=0; i<n; i++){
        for (int j=cs[i]; j<=x; j++) res[j]=(res[j]+res[j-cs[i]])%mod;
    }
    cout<<(res[x])<<endl;
}