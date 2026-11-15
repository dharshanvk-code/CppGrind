#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st; 

        unordered_map<char, char> pairs = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };



        for(int i = 0; i<s.size(); ++i){
            if(pairs.count(s[i])){
                if(st.empty()){
                    return false;
                }
                if(st.top() == pairs[s[i]]){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                st.push(s[i]);
            }
        }

        return st.empty();
    }
};