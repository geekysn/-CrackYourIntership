#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(auto i: s){
            if(i == '(' || i == '{'||i=='['){
                st.push(i);
            }
            else{
                if(st.empty() or (st.top() == '(' && i!=')')or (st.top() == '{' && i!='}')or (st.top() == '[' && i!=']')) return false;
                 st.pop();
            }

        }
        return st.empty();
    }
};