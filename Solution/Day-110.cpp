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
    vector<string>res;
    void dfs(TreeNode* root , string path){
        if(root==nullptr){
            return;
        }
        if(path.size()>0){
            path+="->";
        }
        path+=to_string(root->val);
        if(root->left == nullptr && root->right == nullptr){
            res.emplace_back(path);
            return;
        }
        dfs(root->left , path);
        dfs(root->right , path);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root , "");
        return res;
    }
};

