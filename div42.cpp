#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll eq(string a, string b){
    ll cnt=0;
    for (ll i=0; i<a.size(); i++){
        if (a[i]!=b[i]) cnt++;
    }
    return cnt;
}

void solve(){
    ll n; cin>>n; string a; cin>>a; 
    for (ll i=1; i<=n; i++){
        if (n%i==0){
            string g=a.substr(0,i);
            string s=a.substr(n-i,i);
            int cnt2=0, cnt3=0;
            for (ll j=0; j<=n-i; j+=i){
                cnt2+=eq(g,a.substr(j,i));
                cnt3+=eq(s,a.substr(j,i));
                if (cnt2>1 && cnt3>1) break;
                if (j==n-i){
                    cout<<i<<endl; return;
                }
            }
        }
    }
    cout<<n<<endl;
}

int main(){
    ll t; cin>>t; while (t--) solve();
}
