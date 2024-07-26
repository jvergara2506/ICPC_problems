#include<bits/stdc++.h>
using namespace std;

 int main(){
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        if (ceil((360+0.0)/(180-n)==360/(180-n))) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 }