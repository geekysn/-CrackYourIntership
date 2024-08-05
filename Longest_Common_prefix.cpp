#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0) {
            return "";
        }
        
        string ans  = "";
        sort(begin(strs), end(strs));
        string a = strs[0];
        string b = strs[n-1];
        
        for(int i=0; i<min(a.size(), b.size()); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        return ans;
        
    }
};
