#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int k; cin>>k;
    int cont=0;
    vector<char> val(n);
    for (int i=0; i<n; i++) cin>>val[i];
    for (int i=0; i<n; i++){
        if (val[i]=='B'){
            cont+=1;
            i+=k-1;
        }
    }
    std::cout<<cont<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}