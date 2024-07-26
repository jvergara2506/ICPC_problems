#include <bits/stdc++.h>
using namespace std;

bool f(unsigned long long n){
    unsigned long long n2=n;
    while (n2!=0){
        int d=n2%10;
        if (d!=0 && n%d!=0){
            return false;
        }
        n2/=10;
    }
    return true;
}

void solve(){
    unsigned long long n; cin>>n; 
    while (f(n)==false){
        n++;
    }
    cout<<n<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}