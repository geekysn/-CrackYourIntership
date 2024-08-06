#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int k =0;k<n;k++){
            int i = 0;
            int j = n-1;
            while(i<=j){
                swap(matrix[k][i], matrix[k][j]);
                i++;
                j--;
            }
        }
    }
};