#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; string a; cin>>n>>a;
    string r=a; reverse(r.begin(),r.end());
    string s1=a,s2=a+r,s3=r+a;
    cout<<min(s1,min(s2,s3))<<endl;
}

int main(){
    int t; cin>>t; while (t--) solve();
}