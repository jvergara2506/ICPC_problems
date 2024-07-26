#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> val(n);
    for (int i=0; i<n;i++){
        cin>>val[i];
    }
    int con=0; int maxi=0;
    for (int i=0;i<n;i++){
        if (val[i]==0){
        con=con+1;
        }
        else {
            maxi=max(maxi, con);
            con=0;
        }
    maxi=max(maxi, con);
    }
cout<<maxi<<endl;
}

int main(){
    int t; cin>>t;
    while (t--){
        solve();
    }   
}