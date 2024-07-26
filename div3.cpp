#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int a1,a2,b1,b2,c1,c2,d1,d2; cin>>a1>>a2>>b1>>b2>>c1>>c2>>d1>>d2;
    vector<pair<int, int>>l1; l1.push_back(make_pair(a1,a2));l1.push_back(make_pair(b1,b2));l1.push_back(make_pair(c1,c2));l1.push_back(make_pair(d1,d2));
    sort(l1.begin(), l1.end());
    int res=0;
    res+=(l1[3].first-l1[0].first)*(l1[3].second-l1[0].second);
    cout<<res<<endl;

    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}