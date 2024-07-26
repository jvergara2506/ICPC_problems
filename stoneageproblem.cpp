#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, q, t=0, sum=0; cin>>n>>q;
    map<ll,ll>val;
    for (ll i=0; i<n; i++){
        int v; cin>>v; val[i]=v; sum+=v;
    }
    while (q--){
        ll k,p,w; cin>>k;
        if (k==2){
            cin>>p; 
            val.clear(); t=p; 
            sum=t*n; 
        }
        else{
            cin>>p>>w; p--;
            if (val.find(p)==val.end()){
                sum+=w-t; val[p]=w;
            }
            else{
                sum+=w-val[p]; val[p]=w;
            }
            
        }
        cout<<sum<<endl;
    }
}