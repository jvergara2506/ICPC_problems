#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin>>s;
    vector<int> amount(9);
    for(int &x:amount) cin>>x;
    for(int i = s.size()-1; i>=0; i--){
        if(amount[s[i]-'0'-1]==0) continue;
        else{
           amount[s[i]-'0'-1]--;
           s[i]='0';
        }
        
    }
    for(char x:s) if(x!='0') cout<<x; cout<<"\n";
}