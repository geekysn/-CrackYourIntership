#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    bool isPalindrome(string& s, int lo, int hi){
        while((lo) < (hi)){
            if(s[lo]!=s[hi])return false;
            lo++;
            hi--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int lo = 0, hi = s.size()-1;
        while((lo) < (hi)){
            if(s[lo]!=s[hi])return isPalindrome(s, lo+1, hi) or isPalindrome(s,lo,hi-1);
            lo++;
            hi--;
        }
        
        
        return true;
    }
};