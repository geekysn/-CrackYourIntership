#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL)return true;
        int left = levels(root->left);
        int right = levels(root->right);
        int diff = abs(right - left);
        if(diff>1)return false;
        bool leftbool = isBalanced(root->left);
        if(leftbool == false)return false;
        bool rightbool = isBalanced(root->right);
        if(rightbool == false)return false;
        return true;
    }
};