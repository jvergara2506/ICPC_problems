#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n, res=0, dif1=0, dif2=0; cin>>n; string a,b; cin>>a>>b;
    for (int i=0; i<n; i++){
        if (a[i]!=b[i]) res++;
    }
    for (int i=0; i<n; i++){
        if (a[i]=='1' && b[i]=='0') dif1++;
    }
    for (int i=0; i<n; i++){
        if (a[i]=='0' && b[i]=='1') dif2++;
    }
    cout<<res-min(dif1,dif2)<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}