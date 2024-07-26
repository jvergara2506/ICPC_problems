#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll a,b,c; cin>>a>>b>>c;
    if (abs(a-b)<2 || abs(a-b)*2<c || abs(a-b)*2<a || abs(a-b)*2<b) cout<<-1<<endl;
    else cout<<(c>abs(a-b) ? c-abs(a-b) : c+abs(a-b))<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}