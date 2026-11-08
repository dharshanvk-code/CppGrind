#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = static_cast<int>(s.size()) - 1;

        while (left < right) { //the logic is to skip all non letters in the same loop

            if(isalnum(s[right]) != true){
                right--;
                continue;
            }

            if(isalnum(s[left]) != true){
                left++;
                continue;
            }
        
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};

