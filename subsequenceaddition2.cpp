#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>val(n);
    for (int i=0; i<n; i++){
        cin>>val[i];
    }
    sort(val.begin(), val.end(), greater<int>());
    if(val[val.size()-1]!=1){
        cout<<"NO"<<endl; return;
    }
    for (int i=0; i<n; i++){
        int sum=0;
        for (int j=1; j<val.size(); j++){
            sum+=val[j];
            if (val[0]<=sum) break;
            if (val[0]>sum && j==val.size()-1){
                cout<<"NO"<<endl; return;
            }
        }
        val.erase(val.begin());
    }
    cout<<"YES"<<endl;
}

int main(){
    int p; cin>>p;
    while (p--) solve();
}