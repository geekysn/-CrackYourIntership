#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode* c = new ListNode(-1);
        ListNode* tempc = c;
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                tempc->next = a;
                tempc = tempc->next;
                a = a->next;
            }
            else{
                tempc->next = b;
                tempc = tempc->next;
                b = b->next;
            }
        }
        if(a == NULL){
            tempc->next = b;
        }
        else{
            tempc->next = a;
        }
        return c->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = NULL; 
        a = sortList(a);
        b = sortList(b);
        ListNode* c = merge(a,b);
        return c;
    }
};