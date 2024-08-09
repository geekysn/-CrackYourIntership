#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //O(m+n)
        // ListNode* tempa = a;
        // ListNode* tempb = b;
        // ListNode* c = new ListNode(-1);
        // ListNode* tempc = c;
        // while(tempa!=NULL && tempb!=NULL){
        //     if(tempa->val<=tempb->val){
        //         ListNode* t = new ListNode(tempa->val);
        //         tempc->next = t;
        //         tempc = t;
        //         tempa = tempa->next;
        //     }
        //     else{
        //         ListNode* t = new ListNode(tempb->val);
        //         tempc->next = t;
        //         tempc = t;
        //         tempb = tempb->next;
        //     }
        // }
        // if(tempa == NULL){
        //     tempc->next = tempb;
        // }
        // else{
        //     tempc->next = tempa;
        // }
        // return c->next;
        //o(1)
        // ListNode* c = new ListNode(-1);
        // ListNode* tempc = c;
        // while(a!=NULL && b!=NULL){
        //     if(a->val<=b->val){
        //         tempc->next = a;
        //         tempc = tempc->next;
        //         a = a->next;
        //     }
        //     else{
        //         tempc->next = b;
        //         tempc = tempc->next;
        //         b = b->next;
        //     }
        // }
        // if(a == NULL){
        //     tempc->next = b;
        // }
        // else{
        //     tempc->next = a;
        // }
        // return c->next;
        if(l1 == NULL)return l2;
        if(l2 == NULL)return l1;

        if(l1->val<=l2->val){
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else{
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }