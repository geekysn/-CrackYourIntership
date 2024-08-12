#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    vector<int> dp;
    bool f(vector<int>& nums, int i) {
        if (i >= nums.size())
            return false;
        if (i == nums.size() - 1)
            return true;
        if (dp[i] != -1)
            return dp[i];
        for (int j = i + 1; j <= min(nums[i] + i, (int)nums.size() - 1); j++) {
            bool ans = f(nums, j);
            if (ans)
                return dp[i] = true;
        }
        return dp[i] = false;
    }
    bool canJump(vector<int>& nums) {
        dp.clear();
        dp.resize(nums.size(), -1);
        return f(nums, 0);
    }
};
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0; 
        for (int i = 0; i < nums.size(); ++i) {
            if (i > maxReach) return false;
            maxReach = max(maxReach, i + nums[i]);
        }
        return true;
    }
};
