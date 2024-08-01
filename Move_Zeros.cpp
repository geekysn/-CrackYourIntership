#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int lo = 0;
        int i = 0;
        while(lo<n and i<n){
            if(nums[i] != 0){
                swap(nums[lo], nums[i]);
                lo++;
            }
            i++;

        }
    }
};