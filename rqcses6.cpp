#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll>tree;

ll f(ll node, ll nodelow, ll nodehigh, ll qlow, ll qhigh, ll v){
    if (nodelow>=qlow && nodehigh<=qhigh){
        if (v!=-1) tree[node]+=v;
        return tree[node];
    }
    if (qhigh<nodelow || qlow>nodehigh) return 0;
    ll lif=(nodelow+nodehigh)/2;
    ll sum=f(2*node, nodelow, lif, qlow, qhigh, v)+ f(2*node+1,lif+1,nodehigh, qlow, qhigh, v);
    return sum+tree[node];
}

int main(){
    ll n,q; cin>>n>>q; vector<ll>v(n);
    for (auto& i:v) cin>>i;
    while (__builtin_popcount(n)!=1) {v.push_back(0); n++;}
    tree.resize(2*n);
    for (ll i=0; i<n; i++) tree[n+i]=v[i];
    while (q--){
        ll type; cin>>type;
        if (type==1){
            ll a,b,u; cin>>a>>b>>u; a--; b--;
            f(1,0,n-1,a,b,u);
        }
        else{
            ll k; cin>>k; k--;
            cout<<f(1,0,n-1,k,k,-1)<<endl;
        }
    }
}