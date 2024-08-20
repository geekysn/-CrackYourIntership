#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    vector<int> v;
    vector<int> dp;
    void f(vector<int>& ans, int i){
        if( i == ans.size())return;
        int res = 0;
        for(int j = 0;j<i; j++){
            if(v[j]<v[i])res = max(res,ans[j]);
        }
        ans[i]=res+1;
        f(ans,i+1);
    }
    int lengthOfLIS(vector<int>& nums) {
        v = nums;
        // vector<int> ans(nums.size(),1);
        // f(ans,0);
        int res = INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     res = max(res,ans[i]);
        // }
        dp.resize(2505,-1);
        for(int i = 0;i<nums.size();i++){
            for(int j =0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i] = max(dp[i],1+dp[j]);
                }
            }
            if(dp[i]==-1) dp[i] = 1;
            res = max(res,dp[i]);
        }
        return res;
    }
};