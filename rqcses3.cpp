#include <bits/stdc++.h>
using namespace std; 
using ll=long long; 
vector<ll>tree;

ll f(ll node, ll nodelow, ll nodehigh, ll qlow, ll qhigh, ll v){
    if (nodelow>=qlow && nodehigh<=qhigh){
        if (v!=-1) tree[node]=v;
        return tree[node];
    }
    if (qlow>nodehigh || qhigh<nodelow) return 0;
    ll lif=(nodelow+nodehigh)/2;
    ll sum=f(2*node, nodelow,lif,qlow,qhigh,v)+f(2*node+1,lif+1,nodehigh,qlow,qhigh,v);
    tree[node]=tree[2*node]+tree[2*node+1];
    return sum;
}

int main(){
    ll n,q; cin>>n>>q; vector<ll>v(n);
    for (auto& i:v) cin>>i;
    while (__builtin_popcount(n)!=1) {v.push_back(0); n++;}
    tree.resize(2*n);
    for (ll i=0; i<n; i++) tree[n+i]=v[i];
    for (ll i=n-1; i>=1; i--) tree[i]=tree[2*i]+tree[2*i+1];
    while (q--){
        ll type,low,high; cin>>type>>low>>high; low--; high--;
        if (type==1) f(1,0,n-1,low,low,high+1);
        else cout<<f(1,0,n-1,low,high,-1)<<endl;
    }
}