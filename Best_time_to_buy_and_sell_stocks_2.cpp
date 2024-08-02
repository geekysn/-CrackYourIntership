#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int start = prices[0];
        int len = prices.size();
        for(int i = 1;i<len; i++){
            if(start < prices[i]){
                max += prices[i] - start;
            }
            start = prices[i];
        }
        return max;
    }
};