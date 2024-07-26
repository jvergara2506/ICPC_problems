#include <bits/stdc++.h>
using namespace std;
int dp[3005][3005];

int d(string& s, string&t, int i, int j){
    if (i>=s.size()||j>=t.size()) return 0;
    if (dp[i][j]!=-1) return dp[i][j];
    if (s[i]==t[j]) return dp[i][j]=1+d(s,t,i+1,j+1);
    else return dp[i][j]=max(d(s,t,i+1,j),d(s,t,i,j+1));
}

int main(){
    string s,t; cin>>s>>t;
    memset(dp,-1, sizeof(dp));
    int len=d(s,t,0,0),i=0,j=0; string ans;
    while(len){
        if (s[i]==t[j]){
            ans.push_back(t[j]); len--; i++; j++;
        }
        else{
            if (dp[i+1][j]>dp[i][j+1]) i++;
            else j++;
        }
    }
    cout<<ans<<endl;
}