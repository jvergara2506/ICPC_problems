#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll m; cin>>m; multiset<ll> nums; vector<ll> op(m);
    for(int i=0; i<m; i++){
        int t; cin>>t;
        if(t==1){
            ll a; cin>>a;
            nums.insert(a);
            op[i] = a;
        }

        else if(t==2){
            ll b; cin>>b; b--;
            nums.erase(nums.find(op[b]));
        }

        else if(t==3){
            ll b, a; cin>>b>>a;
            b--;
            nums.erase(op[b]);
            nums.insert(op[b] + a);
            op[b] = op[b]+a;
        }
        
        else{
            ll b; cin>>b; b--;
            auto it = lower_bound(nums.begin(), nums.end(), op[b]);
            if(it==nums.end()) cout<<0<<"\n";
            else cout<<distance(nums.begin(), it)<<"\n";
        }
    }
}