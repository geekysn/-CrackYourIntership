#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};
    bool f(vector<vector<char>>& board, int i, int j, string word, int x){
        if(x == word.size())return true;
        if(i<0 or j<0 or i>=board.size() or j>=board[0].size() or board[i][j]!=word[x])return false;
        bool ans = false;
        char temp = board[i][j];
        board[i][j] = '.';
        for(int d = 0;d<4;d++){
            int ni = i+dir[d][0];
            int nj = j+dir[d][1];
            ans = ans or f(board,ni, nj, word, x+1);
        }
        board[i][j] = temp;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i = 0;i<n; i++){
            for(int j = 0; j<m;j++){
                if(f(board,i,j,word,0))return true;
            }
        }
        return false;
    }
};
