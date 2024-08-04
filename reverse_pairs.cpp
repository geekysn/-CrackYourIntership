#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    int inversion(vector<int>& v1, vector<int>& v2){
        int c=0;
        int i = 0;
        int j = 0;
        while(i<v1.size() && j<v2.size()){
            if((long long)v1[i]>(long long)2*v2[j]){
                c += (v1.size()-i);
                j++;
            }
            else {i++;}
        }
        return c;
    }
    void merge(vector<int>& v1, vector<int> &v2,vector<int>& res){
        int i=0,j=0,k=0;
        while(i<v1.size()&&j<v2.size()){
            if(v1[i]<=v2[j])res[k++] = v1[i++];
            else res[k++] = v2[j++];
        }
        if(i==v1.size())while(j<v2.size())res[k++]=v2[j++];
        if(j==v2.size())while(i<v1.size())res[k++]=v1[i++];
    }
    int mergesort(vector<int>& v){
        int count = 0;
        int n = v.size();
        if(n==1) return 0;
        int n1 = n/2;
        int n2 = n-n/2;
        vector<int> a(n1), b(n2);
        for(int i = 0; i<n1;i++)a[i]=v[i];
        for(int i = 0; i<n2;i++)b[i]=v[i+n1];
        count += mergesort(a);
        count += mergesort(b);
        count += inversion(a,b);
        merge(a,b,v);
        a.clear();
        b.clear();
        return count;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums);
    }
};