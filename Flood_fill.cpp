#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color == image[sr][sc])return image;
        f(image,sr,sc,color,image[sr][sc]);
        return image;
    }
    void f(vector<vector<int>>& im, int i, int j, int c,int a){
        if(i<0 or j<0 or i>=im.size() or j>=im[0].size())return; 
        if(im[i][j]!=a){
            return;
        }
        im[i][j] = c;
        f(im,i+1,j,c,a);
        f(im,i,j-1,c,a);
        f(im,i-1,j,c,a);
        f(im,i,j+1,c,a);
    }
};
/*
2 2 0 
2 2 2
*/