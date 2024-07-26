#include <bits/stdc++.h>
using namespace std;
using ll = long long;



void solve(){
    int n, i = 0; cin >> n; 
    while (n>=10){
        ll p = 1;
        while(n!=0){
            p *= n%10;
            n/=10;
        }
        n = p;
        i ++;  
    }
    
    cout<<i<<"\n";
}


int main(){
    int t; cin >> t; while(t--) solve();
}