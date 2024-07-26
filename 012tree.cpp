#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll a,b,c, res=0; cin>>a>>b>>c;
    if (2*a+b+1!=a+b+c) res=-1;
    else if (a==0) res=b+c-1;
    else{
        res=31-__builtin_clz(a);
        ll oc=a-(1<<res)+1, vac=(1<<res)-oc, an=2*oc+vac;
        if (b+c>vac) res+=ceil((b+c-vac+0.0)/an);
    }
    cout<<res<<endl;
}

int main(){
    ll t; cin>>t; while (t--) solve();
}