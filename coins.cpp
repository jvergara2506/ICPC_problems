#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<long long> val(2);
    for (long long i=0; i<2; i++) cin>>val[i];
    if (val[0]%2==1 && val[1]%2==1) cout<<"YES"<<endl;
    if (val[0]%2==1 && val[1]%2==0) cout<<"NO"<<endl;
    if (val[0]%2==0) cout<<"YES"<<endl;
}
int main(){
    int d; cin>>d;
    while(d--) solve();
}
