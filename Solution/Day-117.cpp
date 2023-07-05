//
// Created by Amit Kumar on 05/07/23.
//
#include "queue"

using namespace std;

//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};


/*
 *  This question focus over BFS the solution is for maximum sum as followed for LeetCode
 *  But question actually asks for minimum, So it will need to tweak ">" to "<" at line 45 and
 *  and INT_MIN to INT_MAX at line 29
 */
class Solution {
public:
    int maxLevelSum(TreeNode *root) {
        int max_sum{INT_MIN}, max_sum_level{1}, current_level = 1;
        if (!root)
            return max_sum_level;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int temp_sum{};
            int level_size = static_cast<int>(q.size());
            for (int i=0; i<level_size; ++i) {
                temp_sum += q.front()->val;
                root = q.front(); q.pop();
                if (root->left)
                    q.push(root->left);
                if (root->right)
                    q.push(root->right);
            }
            if (temp_sum > max_sum) {
                max_sum = temp_sum;
                max_sum_level = current_level;
            }
            current_level++;
        }
        return max_sum_level;
    }
};