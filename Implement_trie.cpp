#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Node{
public:
    char data;
    bool terminal;
    unordered_map<char, Node*> children;
    Node(char data){
        this->data = data;
        this->terminal = false;
    }
    void make_terminal(){
        terminal = true;
    }
    bool isTerminal(){
        return this->terminal;
    }
};

class Trie {
public:
    Node* root;
    Trie() {
        root = new Node('\0');
    }
    
    void insert(string word) {
        Node*temp = root;
        for(int i = 0;i<word.size();i++){
            char ch = word[i];
            if(temp->children.count(ch)){
                temp = temp->children[ch];
            }
            else{
                Node* child = new Node(ch);
                temp->children[ch] = child;
                temp = child;
            }
        }
        temp->make_terminal();
    }
    
    bool search(string word) {
        Node* temp = root;
        for(int i = 0;i<word.size();i++){
            char ch = word[i];
            if(temp->children.count(ch)){
                temp = temp->children[ch];
            }
            else return false;
        }
        return temp->isTerminal();
    }
    
    bool startsWith(string prefix) {
        Node* temp = root;
        for(int i = 0;i<prefix.size();i++){
            char ch = prefix[i];
            if(temp->children.count(ch)){
                temp = temp->children[ch];
            }
            else return false;
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */