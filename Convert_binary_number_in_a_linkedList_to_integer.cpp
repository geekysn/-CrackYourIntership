#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int dec = 0;
        vector<int> v;
        if(head->next == NULL){
            return head->val;
        }
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int n = v.size();
        for(int i = n-1;i>=0;i--){
            dec+=v[i]*pow(2,n-i-1);
        }
        return dec;
    }
};