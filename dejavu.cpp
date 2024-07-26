#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a; cin>>b;
    vector<int> val(a);
    vector<int> con(b);
    vector<int> mod;
    for (int i=0; i<a; i++) cin>>val[i];
    for (int i=0; i<b; i++) cin>>con[i];
    mod.push_back(con[0]);
    for (int i=0; i<b-1; i++){
        if (mod[mod.size()-1]>con[i+1])
            mod.push_back(con[i+1]);
    }
    for (int &i:val){
        for (int j:mod){
            if (i%(1<<j)==0) i+=1<<(j-1);
        }
    }
    for (int i:val) cout<<i<<" ";
    cout<<"\n";
}

int main(){
    int p; cin>>p;
    while (p--) solve();
}