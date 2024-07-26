#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>val(n);
    for (int i=0; i<n; i++){
        cin>>val[i];
    }
    sort(val.begin(), val.end());
    if (val[0]!=1){
        cout<<"NO"<<endl; return;
    }
    long long sum=val[0];
    for (int i=1; i<n; i++){
        if (sum<val[i]){
            cout<<"NO"<<endl; return;
        }
        sum+=val[i];
    }
    cout<<"YES"<<endl;
}

int main(){
    int p; cin>>p;
    while (p--) solve();
}