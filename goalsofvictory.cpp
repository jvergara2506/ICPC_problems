#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, s=0; cin>>n;
    vector<int>val(n);
    for (int i=0; i<n-1; i++){
        cin>>val[i]; s+=val[i];
    }
    cout<<-1*s<<endl;

}

int main(){
    int t; cin>>t;
    while(t--) solve();
}