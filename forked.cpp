#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll a,b,xk,yk,xq,yq, ans=0; cin>>a>>b>>xk>>yk>>xq>>yq;
    set<pair<ll,ll>>k,q;
    k.insert({xk+a,yk+b});k.insert({xk+b,yk+a});
    k.insert({xk-a,yk+b});k.insert({xk-b,yk+a});
    k.insert({xk+a,yk-b});k.insert({xk+b,yk-a});
    k.insert({xk-a,yk-b});k.insert({xk-b,yk-a});
    q.insert({xq+a,yq+b});q.insert({xq+b,yq+a});
    q.insert({xq-a,yq+b});q.insert({xq-b,yq+a});
    q.insert({xq+a,yq-b});q.insert({xq+b,yq-a});
    q.insert({xq-a,yq-b});q.insert({xq-b,yq-a});
    for (auto& x:k){
        if (q.find(x)!=q.end()) ans++;
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}