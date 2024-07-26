#include <bits/stdc++.h>
using namespace std;
using ll=unsigned long long;

void solve(){
    ll n,k; cin>>n>>k; vector<ll>num;ll d=2; map<ll,ll>rep; ll nn=n;
    for (ll i=1; i<=n; i++){
        if (i%2!=0){
            num.push_back(i);
            rep[i]++;
        }
    }
    while (nn--){
        ll tam=num.size();
        for (ll i=0; i<=tam; i++){
            if (num[i]*d<=n && rep[num[i]*d]==0 && num[i]%2!=0){
                num.push_back(num[i]*d); rep[num[i]*d]++;
            }
            else break;
        }
        d++;
    }
    cout<<num[k-1]<<endl;  
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin>>n; while (n--) solve();
}