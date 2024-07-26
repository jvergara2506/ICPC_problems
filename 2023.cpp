#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k, sum=1; cin>>n>>k;
    vector<int>val;
    for (int i=0; i<n; i++){
        int v; cin>>v; val.push_back(v);
    }
    for (int i=0; i<n; i++){
        sum*=val[i];
        if (sum>2023 || 2023%sum!=0){
            cout<<"NO"<<endl; return;
        }
    }
    cout<<"YES"<<endl<<2023/sum<<" ";
    for (int i=0; i<k-1; i++) cout<<1<<" ";
    cout<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}