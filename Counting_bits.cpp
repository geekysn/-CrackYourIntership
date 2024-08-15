#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i = 1; i<=n; i++){
            if(i%2 == 0)ans[i] = ans[i/2];
            else ans[i] = ans[i/2] + 1;
        }
        return ans;
    }
};