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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        TreeNode *tempNode = nullptr;
        q.push(tempNode);
        vector<vector<int>>res;
        if(root==nullptr){return res;}
        vector<int>ans;
        while(q.size()){
            TreeNode*t = q.front(); q.pop();
            if(t == nullptr){
                if(q.size())
                    q.push(tempNode);
                if(ans.size())
                    res.push_back(ans);
                ans.clear();
                continue;
            }
            ans.push_back(t->val);
            if(t->left != nullptr){
                q.push(t->left);
            }
            if(t->right != nullptr){
                q.push(t->right);
            }
        }
        return res;
    }
};
