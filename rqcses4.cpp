#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll>tree;

ll rmq(ll node, ll nodelow, ll nodehigh, ll qlow, ll qhigh){
    if (nodelow>=qlow && nodehigh<=qhigh) return tree[node];
    if (qlow>nodehigh || qhigh<nodelow) return 1e9+10;
    ll lif=(nodelow+nodehigh)/2;
    return min(rmq(2*node,nodelow,lif,qlow,qhigh),rmq(2*node+1,lif+1,nodehigh,qlow,qhigh));
}

void up(ll i, ll b, ll n){
    tree[n+i]=b;
    for (ll j=(n+i)/2; j>=1; j/=2) tree[j]=min(tree[2*j],tree[2*j+1]);
}

int main(){
    ll n,q; cin>>n>>q; vector<ll>v(n);
    for (auto& i:v) cin>>i;
    while (__builtin_popcount(n)!=1) {v.push_back(0); n++;}
    tree.resize(2*n);
    for (ll i=0; i<n; i++) tree[n+i]=v[i];
    for (ll i=n-1; i>=1; i--) tree[i]=min(tree[2*i], tree[2*i+1]);
    while (q--){
        ll type, low, high; cin>>type>>low>>high; low--; high--;
        if (type==1) up(low, high+1, n);
        else cout<<rmq(1,0,n-1,low,high)<<endl;
    }
}