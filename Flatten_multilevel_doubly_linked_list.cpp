#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp = head;
        while(temp){
            if(temp->child!=NULL){
                Node* c = temp->child;
                Node* tempc = c;
                while(tempc->next){
                    tempc = tempc->next;
                }
                if(temp->next) temp->next->prev = tempc;
                if(temp->next)tempc->next = temp->next;
                temp->next = c;
                c->prev = temp;
                temp->child = NULL;
            }
            temp = temp->next;
        }
        return head;
    }
};