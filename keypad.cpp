#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, q; cin >> n >> q; 
    map<char,char> tele;
    for(char c = 'a'; c <= 'c'; c++) tele[c] = '2';
    for(char c = 'd'; c <= 'f'; c++) tele[c] = '3';
    for(char c = 'g'; c <= 'i'; c++) tele[c] = '4';
    for(char c = 'j'; c <= 'l'; c++) tele[c] = '5';
    for(char c = 'm'; c <= 'o'; c++) tele[c] = '6';
    for(char c = 'p'; c <= 's'; c++) tele[c] = '7';
    for(char c = 't'; c <= 'v'; c++) tele[c] = '8';
    for(char c = 'w'; c <= 'z'; c++) tele[c] = '9';

    map<string,int> numero; 
    for(int i  = 0; i < n; i++){
        string s; cin >> s; 
        for(int j = 0; j < s.length(); j++){
            s[j] = tele[s[j]];
        }
        numero[s]++;
    }
    for(int i = 0; i < q; i++){
        string s; cin >> s; 
        cout << numero[s] << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}


