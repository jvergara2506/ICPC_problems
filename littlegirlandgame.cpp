#include <bits/stdc++.h>
using namespace std;

int main(){
    string a; cin>>a; map<char,int>m; int sum=0;
    for (int i=0; i<a.size(); i++) m[a[i]]++;
    for (auto x:m) if (x.second&1) sum++;
    if (sum&1 || sum==0) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}