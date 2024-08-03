#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        vector<int> pre(n);
        pre[0] = nums[0];
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + nums[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (pre[i] == k)
                count++;

            int rem = pre[i] - k;
            if (mp.find(rem) != mp.end())
                count += mp[rem];
            mp[pre[i]]++;
        }
        return count;
    }
};