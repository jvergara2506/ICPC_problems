#include <bits/stdc++.h>
using namespace std;
const int maxi=2e5+5;
using ll=long long;

int main(){
    int n,q; cin>>n>>q; ll lg2=log2(maxi)+1; vector<vector<ll>>sparse(maxi, vector<ll>(lg2));
    for (ll i=1; i<=n; i++) cin>>sparse[i][0];
    for (ll j=1; j<=lg2; j++){
        for (ll i=1; i+(1<<j)-1<=n; i++){
            sparse[i][j]=min(sparse[i][j-1], sparse[i+(1<<(j-1))][j-1]);
        }
    }
    while (q--){
        ll l,r; cin>>l>>r;
        ll len=r-l+1;
        ll pot=log2(len);
        cout<<min(sparse[l][pot],sparse[r-(1<<pot)+1][pot])<<endl;
    }
}
