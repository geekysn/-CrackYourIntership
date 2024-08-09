#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)return head;
        ListNode* curr = head;
        while(curr!=NULL){
            while(curr->next!=NULL&&curr->val == curr->next->val){
                curr->next = curr->next->next;
            }
            curr = curr->next;
        }
        return head;
    }
};