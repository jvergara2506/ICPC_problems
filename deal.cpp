#include <bits/stdc++.h>
using namespace std;

int main(){
    int g,h,i, sum=0; cin>>g>>h>>i; 
    sum=g+h+i; vector<int>nums; nums.push_back(g); nums.push_back(h); nums.push_back(i);
    sort(nums.rbegin(),nums.rend());
    int a=nums[0], b=nums[1], c=nums[2];
    if (a>=500){
        sum-=100;
        if (b>=500){
            sum-=100;
            if (c>=500){
                sum-=100;
            }
        }
        else if (b+c>=500) sum-=100;
    }
    else if (a+b>=500) sum-=100;
    else if (a+b+c>=500) sum-=100;
    cout<<sum<<endl;
}