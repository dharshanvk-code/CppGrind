#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;

        for (int i = 0; i < s.size(); ++i) { //O(n^2)
            unordered_set<char> seen;
            int currentLen = 0;

            for (int j = i; j < s.size(); ++j) { //everytime we find a duplicate, it start from the next element and repeats
                if (seen.count(s[j])) {
                    break;
                }

                seen.insert(s[j]);
                ++currentLen;
                if(currentLen > maxLength){
                    maxLength = currentLen;
                }
            }
        }

        return maxLength;
        
    }
};