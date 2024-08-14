#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        if(n == k)return "0";
        stack<char> st;
        for(int i = 0;i<n;i++){
            if(st.empty()){
                st.push(num[i]);
            }
            else if(st.top()>num[i]){
                while(!st.empty() &&  st.top()>num[i] && k>0){
                    st.pop();
                    k--;
                }
                st.push(num[i]);
            }
            else if(st.top()<=num[i])
                st.push(num[i]);
        }
        while(k-- and st.size())st.pop();
        string ans = "";
        while(st.size()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        if(ans == "")return "0";
        int i = 0;
        while(ans[i] == '0')i++;
        if(i)return ans.substr(i,ans.size()-i)!=""?ans.substr(i,ans.size()-i):"0";
        return ans;
    }
};