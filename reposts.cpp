#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, res=1; cin>>t; map<string, int>p; p["polycarp"]=1;
    while(t--){
        string n1, r, n2; cin>>n1>>r>>n2;
        transform(n1.begin(), n1.end(), n1.begin(), ::tolower);
        transform(n2.begin(), n2.end(), n2.begin(), ::tolower);
        int d=p[n2]+1;
        res=max(res,d);
        p[n1]=d;
    }
    cout<<res<<endl;
}