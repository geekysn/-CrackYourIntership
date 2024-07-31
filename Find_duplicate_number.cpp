#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i<n){
            int ci = nums[i];
            if(nums[ci] == nums[i])return nums[i];
            else swap(nums[i], nums[ci]);
        }
        return -1;
    }
};