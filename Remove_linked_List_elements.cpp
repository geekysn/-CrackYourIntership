#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)return head;
        while(head!=NULL && head->val==val){
            head = head->next;
        }
        ListNode* temp = head;
        while(temp!= NULL && temp->next!=NULL){
            if(temp->next->val == val){
                temp->next = temp->next->next;
            }
            else temp = temp->next;
        }
        return head;
    }
};