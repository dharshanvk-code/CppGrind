#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for(int i = 0; i<strs.size(); ++i){
            string ssort = strs[i]; 
            sort(ssort.begin(), ssort.end()); //now its sorted
            groups[ssort].push_back(strs[i]); //add into vector in hashmap
        }

        vector<vector<string>> result; //return type format
        for(const auto& [key,value] : groups){ //method to add all our values in hashmap into the 2D vector
            result.push_back(value);
        }
        return result;
    }
};