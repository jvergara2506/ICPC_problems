#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, res=0, y=0; cin>>n; long long k=n-1;
    string val; cin>>val;
    vector<long long>z;
    for (int i=0; i<n; i++){
        if (val[i]=='0'){
            y++; z.push_back(i);
        }
    }
    for (int i=size(z)-1; i>=0; i--){
        res+=abs(k-z[i]); k--;
        cout<<res<<" ";
    }
    
    for (int i=0; i<n-y; i++){
        cout<<-1<<" ";
    }

}

int main(){
    int t; cin>>t;
    while (t--) solve();
}