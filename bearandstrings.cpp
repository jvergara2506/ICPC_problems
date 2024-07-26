#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string b; cin>>b;
    vector<int>oso; oso.push_back(0);
    int bt=b.size();
    if (bt<4){
        cout<<0<<endl;
    }
    else{
        for (int i=0; i<=bt-3; i++){
            if (b[i]=='b' && b[i+1]=='e' && b[i+2]=='a' && b[i+3]=='r') oso.push_back(i+1);
        }
        int res=0, t=oso.size();
        for (int i=1; i<t; i++){
            int r=oso[i]+3;
            res+=(bt-r+1)*(oso[i]-oso[i-1]);
        }
        cout<<res<<endl;
    }
}