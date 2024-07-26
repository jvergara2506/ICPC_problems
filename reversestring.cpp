#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string a,b; cin>>a>>b;
    bool fl=false;
    for (int i=0; i<a.size(); i++){
        string s1=a.substr(0, i+1), s2=a.substr(0,i);
        reverse(s2.begin(), s2.end());
        s1+=s2;
        if(s1.find(b)!=-1){
            fl=true; break;
        } 
    }
    cout<<(fl ? "YES":"NO")<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}