#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--){
        string a; cin>>a;
        for (int i=1; i<9; i++){
            if (i!=a[1]-'0') cout<<a[0] <<i<<endl;
        }
        vector<char>l={'a','b','c','d','e','f','g','h'};
        for (int i=0; i<8; i++){
            if (l[i]==a[0]) l.erase(l.begin()+i);
        }
        for (int i=0; i<7; i++){
            cout<<l[i]<<a[1]<<endl;
        }
    }
}