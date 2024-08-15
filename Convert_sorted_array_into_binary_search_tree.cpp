#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* f(vector<int>& nums, int lo, int hi){
        if(lo>hi)return NULL;
        int mid = (lo+hi)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = f(nums, lo, mid-1);
        root->right = f(nums, mid+1, hi);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return f(nums, 0, nums.size()-1);
    }
};