#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

void inorder(struct Node *root, vector<int>& v) {
    if (root == NULL) return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

float findMedian(struct Node *root) {
    vector<int> v;
    inorder(root, v);
    int n = v.size();
    
    if (n % 2 == 1) {
        // If the size is odd, the median is the middle element.
        return float(v[n / 2]);
    } else {
        // If the size is even, the median is the average of the two middle elements.
        return float(v[n / 2 - 1] + v[n / 2]) / 2.0;
    }
}
