/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr){
            return nullptr;
        }
        if(root->val == p->val || root->val == q->val){
            return root;
        }
        auto t1 = lowestCommonAncestor(root->left , p , q);
        auto t2 = lowestCommonAncestor(root->right , p , q);
        if(t1 != nullptr && t2 != nullptr){
            return root;
        }else if(t1 != nullptr){
            return t1; 
        }else{
            return t2;
        }
    }
};
