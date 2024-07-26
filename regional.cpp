#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main(){
    ll n,u,v,w, sump=0, sumtx=0, sumty=0; cin>>n; vector<ll>cx(n),cy(n),p(n);
    for (ll i=0; i<n; i++){
        cin>>u>>v>>w; cx[i]=u; cy[i]=v; p[i]=w;
        sump+=w; sumtx+=u*w; sumty+=v*w;
    }
    double x=sumtx/sump, y=sumty/sump;
    double res=0;
    for (ll i=0; i<n; i++){
        res=max(res,sqrt((cx[i]-x)*(cx[i]-x)+(cy[i]-y)*(cy[i]-y))*p[i]);
    }
    cout<<fixed<<setprecision(6)<<res<<endl;
}