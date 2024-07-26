#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll maxi=2e5+5;
ll n,q; vector<ll>v(maxi),fw(maxi);

void up(ll p, ll ind){
    ll dif=p-v[ind];
    for (ll i=ind; i<=n;i+=-i&i) fw[i]+=dif;
    v[ind]=p;
}

ll query(ll a, ll b){
    ll suma=0, sumb=0; 
    for (ll i=a-1; i>0; i-=i&-i) suma+=fw[i];
    for (ll i=b; i>0; i-=i&-i) sumb+=fw[i];
    return sumb-suma;
}

int main(){
    cin>>n>>q;
    for (int  i=1; i<=n; i++){
        ll p; cin>>p; up(p,i);
    }
    while (q--){
        ll t,a,b; cin>>t>>a>>b;
        if (t==1) up(b,a);
        else cout<<query(a,b)<<endl;
    }
}