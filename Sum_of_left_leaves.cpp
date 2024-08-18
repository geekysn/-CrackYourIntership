#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    int dfs(TreeNode* root, bool left){
        if(root == NULL)return 0;
        if(root->left == NULL and root->right == NULL)return left?root->val:0;
        int l = dfs(root->left,true);
        int r = dfs(root->right, false);
        return l+r;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return dfs(root,false);
    }
};