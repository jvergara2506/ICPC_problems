#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    for (int i=0; i<20; i++){
        int sum=0;
        string s=to_string(n);
        for (int j=0; j<s.size(); j++) sum+=s[j]-'0';
        if (sum%k==0){
            cout<<n<<endl; return;
        }
        else n++;
    }
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}