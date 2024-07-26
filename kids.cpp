#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int mod = 0;
        for(char x:s){
            mod+=(x-'0');
        }

        set<int> ans;
        if((s[n-1]-'0')%2==0) ans.insert(2);
        if((s[n-1]-'0')==0 || (s[n-1]-'0')==5) ans.insert(5);
        if(mod%3==0){
            ans.insert(3);
            if((s[n-1]-'0')%2==0) ans.insert(6);
        }
        if((((s[n-2])-'0')*10 + (s[n-1]-'0'))%4==0) ans.insert(4);
        if(ans.empty()) {
            cout<<"-1\n";
            continue;
        }

        int i=0;
        for(int x:ans) {
            cout<<x;
            if(i<ans.size()-1) cout<<" ";
            i++;
        }
        cout<<"\n";
    }
}