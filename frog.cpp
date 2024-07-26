#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll MOD = 1000000007;;
const int MAX_N = 2; 
struct Matrix { ll mat[MAX_N][MAX_N]; }; 
ll mod(ll a, ll m) { return ((a%m)+m) % m; }

Matrix matMul(Matrix a, Matrix b) { // normally O(n^3)
Matrix ans; // but O(1) as n = 2
for (int i = 0; i < MAX_N; ++i)
for (int j = 0; j < MAX_N; ++j)
ans.mat[i][j] = 0;
for (int i = 0; i < MAX_N; ++i)
for (int k = 0; k < MAX_N; ++k) {
if (a.mat[i][k] == 0) continue; // optimization
for (int j = 0; j < MAX_N; ++j) {
ans.mat[i][j] += mod(a.mat[i][k], MOD) * mod(b.mat[k][j], MOD);
ans.mat[i][j] = mod(ans.mat[i][j], MOD); // modular arithmetic
}
}
return ans;
}
Matrix matPow(Matrix base, int p) { // normally O(n^3 log p)
Matrix ans; // but O(log p) as n = 2
for (int i = 0; i < MAX_N; ++i)
for (int j = 0; j < MAX_N; ++j)
ans.mat[i][j] = (i == j); // prepare identity matrix
while (p) { // iterative D&C version
if (p&1) // check if p is odd
ans = matMul(ans, base); // update ans
base = matMul(base, base); // square the base
p >>= 1; // divide p by 2
}
return ans;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m; cin>>n>>m;
    vector<ll> holes;
    vector<ll> ranges;
    ll l = 0;
    for(int i=0; i<m; i++){
        ll x; cin>>x; holes.push_back(x);
    }
    sort(holes.begin(), holes.end());

    for(auto x:holes){
        ranges.push_back(x-l);
        if(x-l==0){
            cout<<"0\n";
            return 0;
        }

        l = x+1;
    }
    ranges.push_back(n+1-l);

    
    ll ans = 1;

    for(ll x:ranges){
        Matrix fib;
        fib.mat[0][0]=fib.mat[0][1]=fib.mat[1][0]=1;
        fib.mat[1][1]=0;
        fib = matPow(fib, x-1);
        ll f = (fib.mat[1][0] + fib.mat[1][1])%MOD;
        (ans*=f)%=MOD;
    }

    cout<<ans<<"\n";
}