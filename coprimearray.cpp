#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int mcd(int a, int b){
    while (b!=0){
        int temp=b; b=a%b; a=temp;
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, c=0, d=0; cin>>t;
    vector<int>v(t); vector<int>p;
    for (int &i:v) cin>>i;
    for (int i=0; i<t-1; i++){
        int r=mcd(v[i], v[i+1]);
        if (r>1){
            c++; p.push_back(i+1);
        }
    }
    for (int &i:p){
        v.insert(v.begin()+i+d, 1);
        d++;
    }
    cout<<p.size()<<endl;
    for (int &i:v) cout<<i<<" ";
}