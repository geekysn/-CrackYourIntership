#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    int maxArea(vector<int>& h) {
        int lo = 0;
        int hi = h.size()-1;
        long long ans = 0;
        while(lo<hi){
            long long area = min(h[lo], h[hi])* (hi-lo);
            ans = max(area, ans);
            if(h[lo]>h[hi])hi--;
            else lo++;
        }
        return (int)ans;
    }
};class Solution {
public:
    int maxArea(vector<int>& h) {
        int lo = 0;
        int hi = h.size()-1;
        long long ans = 0;
        while(lo<hi){
            long long area = min(h[lo], h[hi])* (hi-lo);
            ans = max(area, ans);
            if(h[lo]>h[hi])hi--;
            else lo++;
        }
        return (int)ans;
    }
}