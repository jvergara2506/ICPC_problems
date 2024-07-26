#include <bits/stdc++.h>
using namespace std;
using ll=unsigned long long;

void solve(){
    int t,res=0; cin>>t;map<int,int>mp;
    int x,y;
    int d=(1LL<<31)-1;
    for (int i=0; i<t; i++){
        cin>>x; y=d^x;
        if (mp[x]==0){
            res++;mp[y]++;
        }
        else mp[x]--;
    }
    cout<<res<<endl;
}

int main(){
    int n; cin>>n; while (n--) solve();
}