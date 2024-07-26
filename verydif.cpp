#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,m; cin>>n>>m; deque<ll>a(n); deque<ll>b(m);
    for (int i=0; i<n; i++) cin>>a[i];
    for (int i=0; i<m; i++) cin>>b[i];
    sort(a.begin(), a.end()); sort(b.rbegin(), b.rend());
    ll d=0;
    while(a.size()){
            if(abs(b.back()-a.back())>=abs(b.front()-a.front())){
                d+=abs(b.back()-a.back());
                b.pop_back(); a.pop_back();
            }
            else{
                d+=abs(b.front()-a.front());
                b.pop_front();
                a.pop_front();
        }
    }
    cout<<d<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while (t--) solve();
}