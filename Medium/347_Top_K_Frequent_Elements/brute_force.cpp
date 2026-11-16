#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m1;

        for (int i = 0; i < nums.size(); ++i) {
            if (m1.count(nums[i])) {
                ++m1[nums[i]];
            }
            else {
                m1[nums[i]] = 1;
            }
        }

        vector<int> counts;  

        for (int j = 0; j < k; ++j) { //only add the amount of nums to count as k
            int maxFreq = 0;
            int maxKey = 0;

            for (const auto& entry : m1) { //loop thru hashmap using auto
                if (entry.second > maxFreq) {
                    maxFreq = entry.second;
                    maxKey = entry.first;
                }
            }

            counts.push_back(maxKey); 
            m1.erase(maxKey);
        }

        return counts;
    }
};