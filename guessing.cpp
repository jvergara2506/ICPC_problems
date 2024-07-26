#include <bits/stdc++.h>
#include <algorithm>
using ll = long long;
using namespace std;

int main(){
    int n, t; cin >> n >> t; 
    vector<ll> in(100000+5,0), out(100000+5,0);
    ll inmax = 0, outmax = 0;
    ll ans = 0, pred = 0;

    while(t--){
        ll a, b; cin >> a >> b;
        ans += ll(a==b) + in[a] + out[b];
        in[b]++;
        out[a]++;
        outmax = max(outmax, out[a]);
        inmax = max(inmax, in[b]);
        pred =max<ll>(max<ll>(pred,out[a] + in[a] + 1),in[b] + out[b] + 1);

        cout << ans << ' ' << max<ll>(outmax + inmax, pred) << '\n';
    }
    return 0;
}