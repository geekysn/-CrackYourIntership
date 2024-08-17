#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    bool existsinTree(TreeNode* root,TreeNode* target){
        if(root == target)return true;
        else if(root == NULL)return false;
        return existsinTree(root->left, target) || existsinTree(root->right, target); 
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(existsinTree(root->left, p) && existsinTree(root->left, q)) return lowestCommonAncestor(root->left, p, q);
        else if(existsinTree(root->right, p) && existsinTree(root->right, q)) return lowestCommonAncestor(root->right, p, q);
        else return root;
    }
};