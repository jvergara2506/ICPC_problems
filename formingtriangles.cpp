#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    vector<ll>v(n);
    for (ll &i:v) cin>>i;
    sort(v.rbegin(), v.rend());
    ll cont=1, res=0;
    for(ll i=0; i<v.size()-1; i++){
        if (v[i]==v[i+1]) cont++;
        else{
            if (cont>1){
                res+=((cont*(cont-1)*(cont-2))/6)+((cont*(cont-1))/2)*(v.size()-i-1); cont=1;
            }
        }
    }
    if (cont>2) res+=(cont*(cont-1)*(cont-2))/6;
    cout<<res<<endl;  
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}