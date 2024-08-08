#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(-1);
        ListNode* temps = small;
        ListNode* great = new ListNode(-1);
        ListNode* tempg = great;
        ListNode* temp = head;
        while(temp!=NULL){
            if(temp->val < x){
                temps->next = temp;
                temps = temps->next;
            }
            else{
                tempg->next = temp;
                tempg = tempg->next;
            }
            temp = temp->next;
        }
        tempg->next = NULL;
        temps->next = great->next;
        return small->next;
    }
};