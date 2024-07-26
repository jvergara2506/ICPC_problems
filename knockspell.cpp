#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin>>n >> k;
    vector<vector<int>> nums(n,vector<int>(n) ); 
    for(vector<int> &x : nums){
        for(int &y : x) { 
            cin >> y;
        }
    }
int ans = 0;
for(int i = 0; i <= n-k; i++){
    for(int j=0; j <= n-k; j++){
        if(nums[i][j] != nums[i][j+k-1]){
            continue;
        }
        if(nums[i][j] != nums[i+k-1][j]){
            continue;
        }
        if(nums[i][j] != nums[i+k-1][j+k-1]){
            continue;
        }
        ans++;
    }
}
cout << ans << '\n';
return 0;
}