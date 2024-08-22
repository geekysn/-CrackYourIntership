#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    int furthestBuilding(vector<int>& ht, int bcs, int lad) {
        priority_queue<int> pq;
        int bcsused = 0;
        int i = 0;
        for(;i<ht.size()-1; i++){
            if(ht[i]>=ht[i+1])continue;
            int h = ht[i+1] - ht[i];
            if(h + bcsused <= bcs){
                bcsused += h;
                pq.push(h);
            }
            else if(lad > 0){
                if(pq.size() && pq.top() > h){
                    bcsused -=(pq.top() - h);
                    pq.pop();
                    pq.push(h);
                }
                lad--;
            }
            else{
                break;
            }
        }
        return i;
    }
};