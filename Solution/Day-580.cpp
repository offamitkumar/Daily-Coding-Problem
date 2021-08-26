/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int minSum;
    void dfs(TreeNode* root , int currentSum) {
        if (root == nullptr) {
            minSum = min(minSum , currentSum) ; 
            return; 
        }
        currentSum+=root->val;
        if (root -> left == nullptr && root -> right == nullptr) {
            minSum = min(minSum , currentSum) ; 
            return ;
        }
        if (root->left)
            dfs(root -> left , currentSum); 
        if (root->right)
        dfs(root -> right , currentSum); 
    }
public:
    int minimumSum(TreeNode* root) {
        minSum = numeric_limits<int>::max(); 
        dfs(root , 0); 
        return minSum; 
    }
};
