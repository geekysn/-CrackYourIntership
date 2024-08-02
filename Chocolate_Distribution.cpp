#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(), a.end());
        if(m == n)return a[a.size()-1]-a[0];
        int i = 0;
        int j = m-1;
        long long ans = 1e9 + 1;
        while(j<n){
            ans = min(a[j]-a[i], ans);
            i++;
            j++;
        }
        return ans;
    }   
};