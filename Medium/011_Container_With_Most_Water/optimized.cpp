#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        //2 pointer method
        int maxWater = 0;
        int left = 0;
        int right = height.size() - 1;

        while(left<right){
            int width = right - left;
            int h = min(height[right], height[left]);
            int area = h * width;

            maxWater = max(maxWater, area);

            if(height[left] < height[right]){
                ++left;
            }
            else{
                --right;
            }
        }


    
        return maxWater;
    }
};