#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m1;
        for(int i = 0; i<nums.size(); ++i){ //simpler logic to add to hashmap
            ++m1[nums[i]]; //creates new element if doesn't already exist
        }
        
        //bucket sort method
        int n = nums.size();
        vector<vector<int>> buckets(n+1);

        for(const auto& ent: m1){
            int number = ent.first;
            int freq = ent.second;
            buckets[freq].push_back(number); //at this point its sorted by highest frequency in reverse order
        }

        vector<int> result; //vector that we will return at the end
        for(int i = n; i>=1; --i){
            for(int num: buckets[i]){ //still O(n) time
                result.push_back(num);

                if(result.size() == k){
                    return result;
                }
            }
        }
        return result;
    }
};