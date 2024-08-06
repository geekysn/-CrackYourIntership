#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define pp pair<int, int>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        for (const string& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());

            anagramGroups[sortedStr].push_back(str);
        }

        vector<vector<string>> result;
        for (const auto& group : anagramGroups) {
            result.push_back(group.second);
        }

        return result;
    }
};
