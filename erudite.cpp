#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1000000007;

long long inv(long long a, long long b){
 return 1<a ? b - inv(b%a,a)*b/a : 1;
}

vector<ll> factorial;;
ll nCr(ll n, ll r);
long long stirlingNumber(ll r, ll n);

int main(){
    ll n, m, k; cin>>n>>m>>k;
    factorial.assign(n+1, 0); factorial[0] = 1;
    for(ll i=1; i<=n; i++) (factorial[i]=i*factorial[i-1])%=mod;
    ll ans = (factorial[k]*stirlingNumber(n, k))%mod;
    ll mk = factorial[m]*(inv(((factorial[m-k]%mod)*(factorial[k]))%mod, mod));
    mk%=mod;
    (ans*=mk)%=mod;
    cout<<ans<<"\n";
}

ll nCr(ll n, ll r)
{
    if (r > n)
        return 0;
 
    if (n == r)
        return 1;
 
    if (r == 0)
        return 1;
 
    return (nCr(n - 1, r - 1) + nCr(n - 1, r))%mod;
}

long long stirlingNumber(ll r, ll n)
{

    if (n > r)
        return 0;
 
    if (n == 0)
        return 0;
 
    if (r == n)
        return 1;
 
    if (n == 1)
        return factorial[r - 1];
 
    if (r - n == 1)
        return nCr(r, 2);
    else
        return (stirlingNumber(r - 1, n - 1)
               + (r - 1) * stirlingNumber(r - 1, n))%mod;
}