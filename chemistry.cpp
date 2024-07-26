#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    int c=1;
    cin>>a; cin>>b;
    string val; cin>>val;
    sort(val.begin(), val.end());
    if (a%2==0 && b&2==0){
        for (int i=0; i<a; i++){
            while (val[i]==val[i+c]) c+=1;
            if (c%2!=0){
                cout<<"NO"<<endl; return;
            }
        }
        cout<<"YES"<<endl;
    }
    if (a%2!=0){

    }
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}