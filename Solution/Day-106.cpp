class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_jump = nums[0];
        int n = nums.size();
        for(int i=0;i<n && i<=max_jump;++i){
            max_jump = max(max_jump , i+nums[i]);
            if(max_jump >= n-1){
                return true;
            }
        }
        return false;
    }
};
