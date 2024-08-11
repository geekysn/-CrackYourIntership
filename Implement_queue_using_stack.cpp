#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class MyQueue {
public:
    stack<int> q;
    int size = 0;
    MyQueue() {
        stack<int> st;
        q = st;
        size = 0;
    }
    
    void push(int x) {
        if(size == 0){
            q.push(x);
            size++;
            return;
        }
        else{
            stack<int> temp;
            for(int i = 0; i<size; i++){
                temp.push(q.top());
                q.pop();
            }
            q.push(x);
            for(int i = 0; i<size; i++){
                q.push(temp.top());
                temp.pop();
            }
            size++;
            return;
        }
    }
    
    int pop() {
        int x = q.top();
        q.pop();
        size--;
        return x;
    }
    
    int peek() {
        return q.top();
    }
    
    bool empty() {
        if(size == 0)return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */