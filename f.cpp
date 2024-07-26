#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p, ans=0; cin>>n>>p;
    while (n--){
        int a; cin>>a;
        if (a<=p) ans=max(ans,a);
    }
    cout<<ans<<endl;
}