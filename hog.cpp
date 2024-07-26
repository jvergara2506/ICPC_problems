#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    int l = n/4;
    int ans;
    int res = (n%4)/2;
    ans = l*(l+res);
    cout<<ans<<"\n";
}