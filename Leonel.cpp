#include <bits/stdc++.h>

using namespace std;

string notation(long long n){
    if (n==1) return "2";
    if (n%2==1) return "(2*" + notation(n-1) + ")";
    else return "(" + notation(n/2) + ")^2";
}

int main(){
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        cout<<notation(n)<<"\n";
    }
}