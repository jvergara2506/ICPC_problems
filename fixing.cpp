#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll t; cin>>t;
    string k; cin>>k;
    int l=0;
    int pot = 1;
    for(int i=k.size()-1; i>=0; i--){
        if(k[i]!='.'){
            l+=(k[i]-'0')*pot;
            pot*=10;
        }
    }
    while(t--){
        vector<string> sub;
        while(true){
            string s;
            getline(cin>>ws, s);
            if(s.empty()) break;
            else sub.push_back(s);
        }

        int hr1=(sub[1][0]-'0')*10 + (sub[1][1]-'0');
        int min1=(sub[1][3]-'0')*10 + (sub[1][4]-'0');
        int seg1=(sub[1][6]-'0')*10 + (sub[1][7]-'0');
        int mil1=(sub[1][9]-'0')*100 + (sub[1][10]-'0')*10 + (sub[1][11]-'0');
        int hr2=(sub[1][0+16]-'0')*10 + (sub[1][1+16]-'0');
        int min2=(sub[1][3+16]-'0')*10 + (sub[1][4+16]-'0');
        int seg2=(sub[1][6+16]-'0')*10 + (sub[1][7+16]-'0');
        int mil2=(sub[1][9+16]-'0')*100 + (sub[1][10+16]-'0')*10 + (sub[1][11+16]-'0');

        hr1+=l/3600000;
        hr2+=l/3600000;
        l=l%3600000;
        min1+=l/60000;
        min2+=l/60000;
        l=l%60000;
        seg1+=l/1000;
        seg2+=l/1000;
        l=l%1000;
        mil1+=l;
        mil2+=l;

        cout<<sub[0]<<"\n";
        cout<<hr1<<":"<<min1<<":"<<seg1<<":"<<mil1<<" --> " <<hr2<<":"<<min2<<":"<<seg2<<":"<<mil2<<"\n";
        for(int i=2; i<sub.size(); i++){
            cout<<sub[i]<<"\n";
        }
        cout<<"\n";
    }
}