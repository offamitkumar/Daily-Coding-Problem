//
// Created by Amit Kumar on 06/07/23.
//
#include "vector"

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int> &nums) {
        vector<int>ans(nums.size());
        int left = 0, right = static_cast<int>(nums.size()-1), current = right;
        while (current >= 0) {
            int leftPosSquare = nums.at(left) * nums.at(left);
            int rightPosSquare = nums.at(right) * nums.at(right);
            leftPosSquare > rightPosSquare ? left ++ : right --;
            ans.at(current--) = max(leftPosSquare, rightPosSquare);
        }
        return ans;
    }
};
