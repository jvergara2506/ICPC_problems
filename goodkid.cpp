#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> val(n); 
    for (int i=0; i<n; i++){
        cin>>val[i];
    }
    sort(val.begin(), val.end());
    val[0]=val[0]+1;
    int res=1; 
    for(int i=0;i<n;i++){
        res=res*val[i];
    }
    cout<<res<<endl;
}


int main (){
    int t; cin>>t; int res;
    while (t--){
        solve ();
    }
}