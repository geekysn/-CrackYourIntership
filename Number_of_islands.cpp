#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

#define pp pair<int, int>
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int result = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(grid[i][j] == '0'){//water body or visited land as -1
                    continue;
                }
                result++;
                grid[i][j] = '0';
                queue<pp> q;
                q.push({i,j});
                while(q.size()){
                    pp cu = q.front();
                    q.pop();
                    int currow = cu.first;
                    int curcol = cu.second;
                    if(currow+1<grid.size() and grid[currow+1][curcol]=='1'){
                        grid[currow+1][curcol] = '0';
                        q.push({currow+1,curcol});
                    }
                    if(currow-1>=0 and grid[currow-1][curcol]=='1'){
                        grid[currow-1][curcol] = '0';
                        q.push({currow-1,curcol});
                    }
                    if(curcol+1<grid[0].size() and grid[currow][curcol+1]=='1'){
                        grid[currow][curcol+1] = '0';
                        q.push({currow,curcol+1});
                    }
                    if(curcol-1>=0 and grid[currow][curcol-1]=='1'){
                        grid[currow][curcol-1] = '0';
                        q.push({currow,curcol-1});
                    }
                }
            }
        }
        return result;
    }
};