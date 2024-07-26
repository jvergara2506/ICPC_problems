#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, d=0, c=0; cin>>n;
    vector<int>val(n);
    for (int i=0; i<n; i++){
        cin>>val[i];
        if (val[i]==1) d++;
    }
    if (d==0) cout<<"First"<<endl;
    else if (d==n && n%2==0) cout<<"Second"<<endl;
    else if (val[0]!=1) cout<<"First"<<endl;
    else if (d==n && n%2!=0) cout<<"First"<<endl;  
    else{
        for (int i=0; i<n; i++){
            if (val[i]==1) c++;
            if (c>0 && val[i]!=1) break;
        }
        if (c%2!=0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }


}

int main(){
    int t; cin>>t;
    while (t--) solve();
}