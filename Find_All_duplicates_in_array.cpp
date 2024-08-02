#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        int i = 0;
        while(i<n){
            int ci = nums[i]-1;
            if(ci==i||nums[i]==nums[ci]){
                i++;
            }
            else swap(nums[i],nums[ci]);
        }
        for(int i = 0; i<n; i++){
            if(nums[i]!=i+1) v.push_back(nums[i]);
        }
        return v;
    }
};