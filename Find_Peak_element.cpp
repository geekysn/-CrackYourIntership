#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int lo = 1;
        int hi = nums.size()-1;
        if(nums.size() == 1)return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2])return nums.size()-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])return mid;
            else if(nums[mid-1]>nums[mid])hi = mid-1;
            else lo = mid+1;
        }
        return -1;
    }
};