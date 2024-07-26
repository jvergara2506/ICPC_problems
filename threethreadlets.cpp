#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int a,b,c; cin>>a>>b>>c;
    vector<int>val; val.push_back(a); val.push_back(b); val.push_back(c);
    sort(val.begin(), val.end());
    if (val[0]==val[1] && val[0]==val[2]) cout<<"YES"<<endl;
    else if (val[1]%val[0]==0 && val[2]%val[0]==0 && (val[1]/val[0]-1)+(val[2]/val[0]-1)<=3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}