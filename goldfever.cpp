#include <bits/stdc++.h>

using namespace std;

int MAXN = 100010;
int n;
vector<int> t(MAXN);

void build(vector<int> a, int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = max(t[v*2], t[v*2+1]);
    }
}

int maxi(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return max(maxi(v*2, tl, tm, l, min(r, tm)), maxi(v*2+1, tm+1, tr, max(l, tm+1), r));
}

void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = max(t[v*2], t[v*2+1]);
    }
}

int main(){
    cin>>n;
    vector<int> a(n);
    vector<vector<int>> g(n, vector<int>(3));
    for(auto &x:g) {
        cin>>x[0]>>x[1]>>x[2];
    }
    build(a, 1, 0, n-1);
    for(int i=n-1; i>=0; i--){
        int y = maxi(1, 0, n-1, min(n, i+g[i][1]+1), min(n, g[i][2])+i+1);
        update(1, 0, n-1, i+1, g[i][0] + y);
    }

    int ans = maxi(1, 0, n-1, 1, n);
    cout<<ans<<"\n";
}