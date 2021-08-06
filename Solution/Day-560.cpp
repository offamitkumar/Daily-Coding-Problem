class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>h; 
        vector<int>res;
        for(int i=0; i<nums.size(); ++i) {
            if (h.find(target- nums[i]) != h.end()) {
                res.push_back(i); 
                res.push_back(h[target-nums[i]]); 
                break;
            }
            h[nums[i]] = i; 
        }
        return res; 
    }
};
