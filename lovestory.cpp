#include<bits/stdc++.h>
using namespace std;

void solve(){
    string val;
    for (int i=0; i<10; i++) cin>>val[i];
    int cont=0;
    if (val[0]!='c') cont+=1;
    if (val[1]!='o') cont+=1;
    if (val[2]!='d') cont+=1;
    if (val[3]!='e') cont+=1;
    if (val[4]!='f') cont+=1;
    if (val[5]!='o') cont+=1;
    if (val[6]!='r') cont+=1;
    if (val[7]!='c') cont+=1;
    if (val[8]!='e') cont+=1;
    if (val[9]!='s') cont+=1;
    cout<<cont<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}