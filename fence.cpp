#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k, res=0, ans=0; cin>>n>>k; vector<int>f(n+1);
    for (int i=1; i<=n; i++) cin>>f[i];
    for (int i=1; i<=k; i++) res+=f[i];
    int j=1, ind=j; ans=res;
    for (int i=k+1; i<=n; i++){
        res+=f[i]; res-=f[j]; j++;
        ans=min(res,ans);
        if (res==min(res,ans)) ind=j;
    }
    cout<<ind<<endl;
}