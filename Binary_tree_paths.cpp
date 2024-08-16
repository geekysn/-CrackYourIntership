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
    vector<string> ans;
    void f(TreeNode* root, string str){
        if(root == NULL)return;
        if(!root->left and !root->right){
            str+= to_string(root->val);
            ans.push_back(str);
        }
        string ch = to_string(root->val);
        f(root->left,str+ch+"->");
        f(root->right,str+ch+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        ans.clear();
        f(root,"");
        return ans;
    }
};