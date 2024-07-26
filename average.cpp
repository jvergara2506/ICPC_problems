#include <bits/stdc++.h>

using namespace std;

int main(){
    int x; cin>>x;
    int ans = 3000/x;
    if(3000%x != 0 ) ans++;
    cout<<min(ans, 15)<<"\n";
}