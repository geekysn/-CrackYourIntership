#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int len1 = 0, len2 = 0;
        while(temp1!=NULL){
            len1++;
            temp1 = temp1->next;
        }
        while(temp2!=NULL){
            len2++;
            temp2 = temp2->next;
        }
        temp1 = headA;
        temp2 = headB;
        if(len1>len2){
            for(int i = 0; i<len1-len2; i++){
                temp1=temp1->next;
            }
            while(temp1!=temp2){
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            return temp1;
        }
        else{
            for(int i = 0; i<len2-len1; i++){
                temp2=temp2->next;
            }
            while(temp2!=temp1){
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            return temp1;
        }
    }