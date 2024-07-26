#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string b; cin>>b;
    int l=0, r=b.size()-1;
    while (l<=r){
        if (b[l]=='r') cout<<l+1<<"\n";
        l++;
    }
    l=0;
    while (r>=l){
        if (b[r]=='l') cout<<r+1<<"\n";
        r--;
    }
}