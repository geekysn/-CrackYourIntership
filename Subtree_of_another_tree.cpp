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
    bool f(TreeNode* root, TreeNode* subRoot){
        if(!root or !subRoot)return root==NULL and subRoot==NULL;
        else if(root->val == subRoot->val)return f(root->left, subRoot->left) and f(root->right, subRoot->right);
        else return false;
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)return false;
        else if(f(root, subRoot))return true;
        else return isSubtree(root->left, subRoot) or isSubtree(root->right, subRoot);
    }
};