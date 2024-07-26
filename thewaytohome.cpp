#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d, res; cin>>n>>d;
    string val; cin>>val; res=0;
    vector<int> p(n,1000); p[0]=0;
    for (int i=0; i<n; i++){
        if (val[i]=='1'){
            for (int j=0; j<=d; j++){
                if (val[i+j]=='1' && i+j<n) p[i+j]=min(p[i+j],p[i]+1); 
            }
        }
    }
    if (p[n-1]==1000) cout<<-1<<endl;
    else cout<<p[n-1]<<endl;
}