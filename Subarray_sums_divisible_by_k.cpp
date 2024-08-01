#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int preSum = 0, ans = 0;
        vector<int> mp(k);
        mp[0] = 1;

        for (int num : nums) {
            preSum = (preSum + num % k + k) % k;
            ans += mp[preSum];
            mp[preSum]++;
        }

        return ans;
    }
};