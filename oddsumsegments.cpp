#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k, s=0; cin>>n>>k;
    vector<int>val(n); vector<int>imp;
    for (int i=0; i<n; i++){
        cin>>val[i];
        if (val[i]%2!=0){
            s++;
            if (s<=k) imp.push_back(i+1);
        }
    }
    if (s>=k){
        if (s%2==k%2){
            cout<<"YES"<<endl;
            for (int i=0; i<k-1; i++) cout<<imp[i]<<" ";
            cout<<n<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}