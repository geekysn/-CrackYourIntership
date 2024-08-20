#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(auto it:nums)mp[it]++;
        while(k){
            int max1 = INT_MIN;
            int maf = INT_MIN;
            for(auto ele: mp){
                int freq = ele.second;
                if(freq>maf){
                    max1 = ele.first;
                    maf = freq;
                }
            }
            ans.push_back(max1);
            mp.erase(max1);
            k--;
        }
        return ans;
    }
};