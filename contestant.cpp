#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll p = 1000000007;

ll modu(ll a, ll b){
    return (b+a%b)%b;
}

long long inv(long long a, long long b){
    return 1<a ? b - inv(b%a,a)*b/a : 1;
}

ll coef(ll n, ll k, vector<ll>& factorial){
    if(n<k || k<=0) return 0;
    ll ans = factorial[n];
    ll div = modu((factorial[n-k]%p*1ll*factorial[k]%p)%p, p);
    ans = (ans*1ll*inv(div, p))%p;
    return ans;
}

int main(){
    vector<ll> factorial(200011);
    factorial[0]=1;
    for(int i=1; i<=200010; i++){
        factorial[i] = (factorial[i-1]*1ll*i)%p;
    }

    int t; cin>>t; 
    while(t--){
        ll A, B, C, K, c;
        cin>>A>>B>>C>>K>>c;
        ll a1 = modu(coef(A+B, K-c, factorial)%p - coef(A, K-c, factorial)%p - coef(B, K-c, factorial)%p, p);
        ll a2 = modu(coef(C, c, factorial), p);
        ll ans = (a1*1ll*a2)%p;
        cout<<ans<<"\n";
    }
}