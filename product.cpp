#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string a,b; 
    while (cin>>a>>b){
        if (a[0]=='0' || b[0]=='0') cout<<0<<endl;
        else{
            reverse(a.begin(),a.end());
            reverse(b.begin(),b.end());
            int res[600]={0};
            for (int i=0; i<a.size(); i++) for (int j=0; j<b.size(); j++) res[i+j]+=(a[i]-'0')*(b[j]-'0');
            for (int i=0; i<599; i++){
                res[i+1]+=res[i]/10; res[i]%=10;
            }
            int pos;
            for (int i=599; i>=0; i--){ 
                if (res[i]!=0){
                    pos=i; break;
                }
            }
            for (int i=pos; i>=0; i--){
                cout<<res[i];
            }
            cout<<endl;
        }
    }
}