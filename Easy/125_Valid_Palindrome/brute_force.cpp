#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        for(char c: s){ //standardize by only adding letters and lowercasing them
            if(isalnum(c)){
                cleaned += tolower(c);
            }
        }
        for(int i = 0; i<cleaned.size(); ++i){ //brute force logic to check
            if(i >= cleaned.size() - i){
                return true;
            }
            if(cleaned[i] == cleaned[cleaned.size() - 1 - i]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};