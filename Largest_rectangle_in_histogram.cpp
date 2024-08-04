#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    int largestRectangleArea(vector<int>& v) {
        vector<int> pse(v.size());
        pse[0] = -1;
        stack<int> pt;
        pt.push(0);
        for(int i = 1; i<v.size(); i++){
            while(pt.size() && v[pt.top()]>=v[i])pt.pop();
            if(pt.size()==0)pse[i] = -1;
            else pse[i] = pt.top();
            pt.push(i);
        }
        for(auto it: pse)cout<<it<<" ";
        cout<<endl;
        vector<int> nse(v.size());
        nse[v.size()-1] = v.size();
        stack<int> nt;
        nt.push(v.size()-1);
        for(int i = v.size()-2; i>=0; i--){
            while(nt.size() && v[nt.top()]>=v[i])nt.pop();
            if(nt.size()==0)nse[i] = v.size();
            else nse[i] = nt.top();
            nt.push(i);
        }
        for(auto it: nse)cout<<it<<" ";
        cout<<endl;

        int maxarea = 0;
        for(int i = 0; i<v.size(); i++){
            maxarea = max(maxarea, v[i]*(nse[i]-pse[i]-1));
        }
        return maxarea;
    }
};