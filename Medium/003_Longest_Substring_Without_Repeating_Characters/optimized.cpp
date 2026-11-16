#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(128, -1);

        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < s.size(); ++right) {
            unsigned char c = s[right];

            /* while(seen.count(s[right])){
                seen.erase(s[left]);
                ++left;
            }*/
           //initially had a while loop but searching took too much time and my solution was too slow

            if (lastSeen[c] >= left) {
                left = lastSeen[c] + 1;
            }

            lastSeen[c] = right;

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};