#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n, a=1e9, b=1e9, res=0; cin>>n;
    vector<long long>val(n);
    for (int i=0; i<n; i++){
        cin>>val[i]; 
        if (a>b){
            swap(a,b);
        }
        if (val[i]<=a) a=val[i];
        else if (val[i]<=b) b=val[i];
        else a=val[i], res++;
    }
    cout<<res<<endl;
    
}
 
int main(){
    int t; cin>>t;
    while (t--) solve();
}