#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int maxProfit = 0;

        while (right < prices.size()) {

            if (prices[right] > prices[left]) { //then we are making profit
                // Calculate profit
                int profit = prices[right] - prices[left];
                // Update maxProfit if necessary
                if(profit > maxProfit){
                    maxProfit = profit;
                }

            }

            else {
                //update left ptr
                left = right;
            }
            //update right ptr
            ++right;
        }

        return maxProfit;
    }
};