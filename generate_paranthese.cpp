#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    void para(vector<string>& v,string empty, int i, int j, int n){
        if(j == n){
            v.push_back(empty);
            return;
        }
        if(i<n) para(v,empty+'(',i+1,j,n);
        if(j<i) para(v,empty+')',i,j+1,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        para(v,"",0,0,n);
        return v;
    }
};