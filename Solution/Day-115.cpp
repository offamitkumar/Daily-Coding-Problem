//
// Created by Amit Kumar on 20/03/23.
//
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    bool isExactTreeMatch(TreeNode*p, TreeNode*q) {
      // copy and replace content of "isSameTree" with this code to get a solution for leetcode.
      if (p == nullptr && q == nullptr) {
        return true;
      } else if (p == nullptr or q == nullptr) {
        return false;
      }
      if (p -> val != q->val) {
        return false;
      }
      return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
public:
    // using below function as helper method as checker for subtree matching.
    bool isSameTree(TreeNode *p, TreeNode *q) {
      if (isExactTreeMatch(p,q)) {
        return true;
      }
      // check right subtree.
      if (q->left && isSameTree(p, q->left)) {
        return true;
      }
      // check left subtree
      if (q->right && isSameTree(p, q->right)) {
        return true;
      }
      return false;
    }
};