#include <bits/stdc++.h>
using namespace std;
const int maxi=1e6+100;

int main(){
    int n,x; cin>>n>>x; vector<int>coins(n);
    for (auto& i:coins) cin>>i;
    vector<int>num(maxi,-1);
    num[0]=0;
    for (int i=0; i<maxi; i++){
        if (num[i]!=-1){
            for (int j=0; j<n; j++){
                if (i+coins[j]<maxi){
                    if (num[i+coins[j]]==-1) num[i+coins[j]]=num[i]+1;
                    else num[i+coins[j]]=min(num[i+coins[j]],num[i]+1);
                }
            }
        }
    }
    cout<<num[x]<<endl;
}