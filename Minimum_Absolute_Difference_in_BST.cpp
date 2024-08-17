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
    void inorder(TreeNode* root, vector<int>& v){
        if(root == NULL)return;
        
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }        
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        inorder(root, v);
        for(auto it: v)cout<<it<<" ";
        int mini = INT_MAX;
        for(int i = 1; i<v.size(); i++){
            mini = min(mini, abs(v[i]- v[i-1]));
        }
        return mini;
    }
};