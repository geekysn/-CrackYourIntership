#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> mp;
        int n = s.size();
        for(int i = 0; i<n; i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int, char>> pq;
        for(auto x:mp){
            cout<<x.second<<" "<<x.first<<endl;
            pq.push({x.second, x.first});
        }
        string ans = "";
        if(n%2!=0 && pq.top().first>n/2+1)return "";
        if(n%2==0 && pq.top().first>n/2)return "";
        while(pq.size()){
            auto a = pq.top();
            pq.pop();
            ans += a.second;
            pair<int, char> b;
            if(pq.size()){
                b = pq.top();
                pq.pop();
                ans += b.second;
            }
            if(a.first>1)pq.push({a.first - 1, a.second});
            if(b.first>1)pq.push({b.first - 1, b.second});
        }
        if(ans.size()!=n)return "";
        return ans;
    }
};