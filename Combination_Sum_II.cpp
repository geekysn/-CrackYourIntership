#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
vector<vector<int>> paths;
vector<int> path;
vector<int> unique;
unordered_map<int, int> m;

void helper(int idx, vector<int> &unique, int target){
    if(idx==unique.size() || target==0){
        if(target==0) paths.push_back(path);
        return;
    } 
    
    int val=unique[idx];
    
    for(int i=1; i<= m[val]; i++){
        for(int j=0;j<i;j++) {
            path.push_back(val);
            target-=val;
        }
        
        if(target>=0) helper(idx+1, unique, target);
        
        for(int j=0;j<i;j++) {
            path.pop_back();
            target+=val;
        }
    }
    
    helper(idx+1, unique, target);
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {        
// unique contains no duplicate elements of candidates array, all unique elements.
    for(int i:candidates){
        if(m.find(i)==m.end()){
            unique.push_back(i);
        }
        m[i]++;
    }
    
    vector<int> temp;
    helper(0, unique, target);
    return paths;
}    

};