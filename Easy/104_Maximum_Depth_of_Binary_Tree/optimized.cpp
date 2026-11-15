#include <algorithm>
using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr){ //base case
            return 0;
        }
        int rightDepth = maxDepth(root->right);
        int leftDepth = maxDepth(root->left);

        return 1+max(rightDepth, leftDepth); //adding one to account for the rootNode 
    }
};