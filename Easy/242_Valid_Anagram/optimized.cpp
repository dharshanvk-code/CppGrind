#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){ //simple check off the bat
            return false;
        }
        unordered_map<char, int> freq; 

        for(int i = 0; i < s.size(); ++i){ //add all characters in s into map as key and counts as value
            if(freq.count(s[i]) == 1){
                freq[s[i]] ++;
            }
            else{
                freq[s[i]] = 1;
            }
        }
        for(int i = 0; i<t.size(); ++i){ //check characters in t and subtract count from map everytime it appears
            freq[t[i]] --;
            if(freq[t[i]] < 0){ //this logic works for edge cases
                return false;
            } 
        }  
        return true;
    }
};