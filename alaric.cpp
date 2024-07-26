#include <bits/stdc++.h>

using namespace std;

int main(){
    int k; cin>>k;
    string n; cin>>n;
    int ans = 0;
    for(int i=0; i<k; i++){
        if(n[i]!='0' && n[i]!='6' && n[i]!='8') ans++;
    }

    cout<<ans<<"\n";
}