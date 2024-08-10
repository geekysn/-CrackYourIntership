#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    int ans = 0;
    int dfs(TreeNode* root){
        if(root == NULL) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        ans = max(ans, left+right);
        return max(left, right) +1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};