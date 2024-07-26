#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int stoii(string s){
    int ret = 0, pot = 1;
    for(int i=s.size()-1; i>=0; i--){
        ret+=((s[i]-'0')*pot);
        pot*=10;
    }

    return ret;
}

void solve(){
    string s; 
    string k; 
    cin>>s>>k;
    vector<char> let;
    vector<string> rep;
    for(int i=0; i<s.size(); i++){
        if(!isdigit(s[i])){
            let.push_back(s[i]);
            rep.push_back("1");
        }

        else{
            string p;
            while(isdigit(s[i])){
                p.push_back(s[i]);
                i++;
            }
            rep.push_back(p);
            let.push_back(s[i]);
        }
    }

    for(auto x:rep){
        if(x.size()>k.size()){
            cout<<"unfeasible\n";
            return;
        }
    }

    int kk; kk = stoii(k);
    int n = 0;
    for(auto x:rep){
        n+=stoii(x);
    }

    if(n>kk){
        cout<<"unfeasible\n";
        return;
    }

    string ans = "";
    for(int i=0; i<let.size(); i++){
        int y = stoii(rep[i]);
        ans=ans+string(y, let[i]);
    }

    cout<<ans<<"\n";
}

int main(){
    int t; cin>>t; while(t--) solve();
}