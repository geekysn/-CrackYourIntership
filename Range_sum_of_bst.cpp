#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    void inorder(TreeNode* root, vector<int>& v){
        if(root == NULL)return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> v;
        inorder(root, v);
        int sum = 0;
        for(int i = 0; i<v.size(); i++){
            if(v[i]>=low && v[i]<=high){
                sum+=v[i];
            }
        }
        return sum;
    }
};