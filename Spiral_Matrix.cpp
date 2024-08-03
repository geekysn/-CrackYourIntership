#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(); int n=matrix[0].size();
        vector<int> v;
        int minr = 0, minc = 0, maxr = m - 1, maxc = n - 1;
        while (minr <= maxr && minc <= maxc)
        {
            // right
            for (int i = minc; i <= maxc; i++)
            {
                v.push_back(matrix[minr][i]);
            }
            minr++;
            if(minr>maxr || minc > maxc)break;
            // down
            for (int i = minr; i <= maxr; i++)
            {
                v.push_back(matrix[i][maxc]);
            }
            maxc--;
            if(minr>maxr || minc > maxc)break;
            // left
            for (int i = maxc; i >= minc; i--)
            {
                v.push_back(matrix[maxr][i]);
            }
            maxr--;
            if(minr>maxr || minc > maxc)break;
            // up
            for (int i = maxr; i >= minr; i--)
            {
                v.push_back(matrix[i][minc]);
            }
            minc++;
        }
        return v;
    }
};