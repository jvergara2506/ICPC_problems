#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n,k,p, sum=0,tn=0,d=0; cin>>n>>k>>p; vector<ll>v(n); vector<ll>ps; vector<ll>ij(2);
    for (auto& i:v){
        cin>>i; sum+=i;
    }
    ll t=n*v[n-1]-sum, res=t;
    for (ll i=1; i<n; i++){
        ps.push_back(v[i]-v[0]);
    }
    for (ll i=0; i<n-1;i++){
        ll l=0, r=ps.size()-1;
        while (l<=r){
            ll m=l+(r-l)/2;
            if (ps[m]-d<=k) l=m+1;
            else r=m-1;
        }
        tn=t-(v[r+i+1]-v[i])*(i+1)+(i+1)*p;
        res=min(res,tn);
        if (tn==res){
            ij[0]=i+1;ij[1]=r+i+2;
        }
        ps.erase(ps.begin());
        d+=v[i+1]-v[i];
    }
    if (res>=t) cout<<-1<<endl;
    else cout<<ij[0]<<" "<<ij[1]<<" "<<res<<endl;
}