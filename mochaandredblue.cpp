#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll,ll>;
using vpll = vector<pll>;
#define rep(a, b) for (ll i = a; i < b; i++)
#define all(x) x.begin(), x.end()
 
void solve(){
    ll n, it=-1; cin>>n; string a; cin>>a; string ans=a;
    rep(0,n){
        if (a[i]=='B' || a[i]=='R'){
            it=i; break;
        }
    }
    if (it==-1){
        rep(0,n){
            if (i%2==0) ans[i]='B';
            else ans[i]='R';
        }
    }
    else{
        rep(it+1,n){
            if (a[i]=='?'){
                ans[i-1]=='R' ? ans[i]='B' : ans[i]='R';
            }
        }
        for (ll i=it-1; i>=0; i--){
            if (a[i]=='?'){
                ans[i+1]=='R' ? ans[i]='B' : ans[i]='R';
            } 
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t; cin>>t; while (t--) solve();
}