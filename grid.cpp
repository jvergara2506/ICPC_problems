#include <bits/stdc++.h>

using namespace std;

vector<int> primcor = {1, -1, 0, 0, -1, 1, 1, -1};
vector<int> secmcor = {0, 0, 1, -1, -1, 1, -1, 1};

int calc(vector<vector<int>>& maxpath, vector<string>& grid, int i, int j, int& maximo, int x, int y){
    if(maxpath[i][j]==-1){
        maxpath[i][j]=1;
        for(int m=0; m<8; m++){
            int ip = i+primcor[m], jp = j+secmcor[m];
            if(ip>=x || ip < 0 || jp>=y || jp<0) continue;
            if(grid[i][j] -'A' == grid[ip][jp] - 'A' + 1){
                maxpath[i][j]=max(maxpath[i][j], calc(maxpath, grid, ip, jp, maximo, x, y)+1);
            }
        }
    }

    maximo=max(maximo, maxpath[i][j]);
    return maxpath[i][j];
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, m; 
    cin>>n>>m;
    vector<string> grid(n);
    for(int i=0; i<n; i++){
        cin>>grid[i];
    }
    vector<vector<int>> maxpath(n, vector<int> (m, -1));
    int maxi=1;
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) if(maxpath[i][j]==-1) calc(maxpath, grid, i, j, maxi, n, m);

    cout<<maxi<<"\n";
}