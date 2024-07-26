#include <bits/stdc++.h>
using namespace std;

void solve(){
    int C,R,S; cin >> C >> R >> S;
    int cucha = ceil((C+R+0.0)/S), pasas = ceil((R+0.0)/S);

    cout << cucha - pasas << " " << max(0,cucha - R) << '\n';
}

int main(){
    int t; cin >> t; while(t--) solve();
}