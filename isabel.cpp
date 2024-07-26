#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin>>s;
    int k = stoi(s);
    int ans = 0;
    for(int i=0; i<s.size(); i++) if((s[i]-'0'!=0) && k%(s[i]-'0')==0) ans++;
    cout<<ans<<"\n";
}