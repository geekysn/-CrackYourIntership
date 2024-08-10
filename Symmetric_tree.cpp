#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    bool check(TreeNode* r1, TreeNode* r2){
        if(r1 == NULL && r2 == NULL)return true;
        if(r1 == NULL || r2 == NULL)return false;
        if(r1->val!=r2->val)return false;
        return check(r1->left, r2->right) && check(r1->right, r2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)return true;
        return check(root->left, root->right);
    }
};