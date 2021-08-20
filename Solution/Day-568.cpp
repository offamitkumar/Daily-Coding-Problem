class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size()); 
        int left =0 , right = nums.size() -1 , current = nums.size()-1; 
        while (current>=0) {
            int a = nums[left]* nums[left]; 
            int b = nums[right]*nums[right]; 
            if (a > b) {
                ans[current] = a; 
                left++; 
            } else {
                ans[current] = b; 
                right--;
            }
            current--;
        }
        return ans; 
    }
};
