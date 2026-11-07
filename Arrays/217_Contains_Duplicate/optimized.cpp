#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        seen.reserve(nums.size()); //stops unnecessary rehashing
        //seen.insert(nums[i]) — Adds a number to the set
        //seen.count(nums[i]) — Checks whether the number already exists

        for(int i = 0; i<nums.size(); ++i){
            if(seen.count(nums[i])){
                return true;
            }
            seen.insert(nums[i]);
        }

        return false;
    }
};