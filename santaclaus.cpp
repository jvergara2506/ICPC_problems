#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k,lane; cin>>n>>m>>k;
    lane=ceil((k+0.0)/(2*m));
    cout<<lane<<" ";
    cout<<ceil(((k-(lane-1)*m*2)+0.0)/2)<<" ";
    if (k%2!=0) cout<<"L"<<endl;
    else cout<<"R"<<endl;
}