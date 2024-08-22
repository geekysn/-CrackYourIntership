#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

#define ll long long
class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        unordered_set<ll> vis;
        vector<ll> v = {2,3,5};

        pq.push(1);
        vis.insert(1);

        ll curr;
        for(int i = 0;i<n;i++){
            curr = pq.top();
            pq.pop();
            for(int it:v){
                ll next = curr*it;
                if(!vis.count(next)){
                    vis.insert(next);
                    pq.push(next);
                }
            }
        }
        return int(curr);
    }
};