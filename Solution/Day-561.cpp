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
    TreeNode* BSTree(vector<int>&nums , int left , int right) {
        if (left > right)  {
            return nullptr;
        }
        int mid = left + (right - left) / 2; 
        TreeNode* root = new TreeNode(nums.at(mid)); 
        root -> left = BSTree(nums , left , mid - 1); 
        root -> right= BSTree(nums , mid+1 , right); 
        return root; 
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return BSTree(nums , 0 , nums.size()-1); 
    }
};
