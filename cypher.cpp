#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int> sieve(1000001);
    for(int x=2; x<=1000000; x++){
        if(sieve[x]) continue;
        for(int u = 2*x; u<=1000000; u+=x){
            sieve[u]=x;
        }
    }

    vector<int> amount(1000001, 0);
    for(int i=2; i<=1000000; i++){
        amount[i]=amount[i-1];
        if(sieve[i]==0) amount[i]++;
    }

    int t; cin>>t;
    while (t--){
        int l, r;
        cin>>l>>r;
        cout<<amount[r]-amount[l-1]<<"\n";
    }
}