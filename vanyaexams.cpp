#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,r,avg,sum=0,ans=0; cin>>n>>r>>avg; vector<pair<ll,ll>>e(n);
    for (auto& i:e) {cin>>i.second>>i.first; sum+=i.second;}
    sort(e.begin(),e.end());
    ll i=0;
    while (sum<avg*n){
        if (e[i].second==r) i++;
        else{
            ans+=e[i].first*(r-e[i].second);
            sum+=r-e[i].second;
            if (sum>avg*n) ans-=(sum-avg*n)*e[i].first;
            i++;
        }
    }
    cout<<ans<<endl;
}