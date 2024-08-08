#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k){
        ListNode* temp = head;
        int n = 0; 
        while(temp){
            n++;
            temp = temp->next;
        }
        ListNode* c = new ListNode(-1);
        c->next = head;
        ListNode* curr = c;
        ListNode* prev = c;
        ListNode* nex = c;
        while(n>=k){
            curr = prev->next;
            nex = curr->next;
            for(int i = 1;i<k; i++){
                curr->next = nex->next;
                nex->next = prev->next;
                prev->next = nex;
                nex = curr->next;
            }
            prev = curr;
            n = n-k;
        }

        return c->next;
    }
};