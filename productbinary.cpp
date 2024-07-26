#include <bits/stdc++.h>
using namespace std;

bool isbin(int n){
    while (n>1){
        int d=n%10;
        if (d>1) return false;
        n/=10;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin>>t; vector<int>bd;
    for (int i=2; i<1e5+1; i++){
        if (isbin(i)) bd.push_back(i);
    }
    reverse(bd.begin(),bd.end());
    while (t--){
        int n; cin>>n; 
        for (auto &i:bd){
            while(n%i==0){
                n/=i;
            }
            if (n==1) break;
        }
        if (n==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}