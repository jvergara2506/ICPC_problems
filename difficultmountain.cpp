#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef vector<ll> vll; 
typedef pair<ll,ll> pll;

bool cp(pll &x, pll &y){
    ll mx=max(x.first, x.second), my=max(y.first, y.second);
    ll lx=min(x.first, x.second), ly=min(y.first, y.second);
    return mx==my ? lx<ly : mx<my;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,d, ans=0; cin>>n>>d;
    vector<pll>c(n);
    for (auto &x:c) cin>>x.first>>x.second;
    sort(c.begin(), c.end(), cp); 
    for (int i=0; i<n; i++){
        if (c[i].first>=d){
            d=max(d,c[i].second);
            ans++; 
        }
    }
    cout<<ans<<endl;
}