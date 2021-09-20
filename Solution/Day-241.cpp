class Solution {
public:
    int hIndex(vector<int>& citations) {
        vector<int>dp(1003); 
        for (auto&itr:citations) { 
            dp[itr]++;
        }
        for (int i = 1001; i>=0; --i) {
            dp[i] += dp[i+1]; 
            if (i <= dp[i]) {
                return i;
            }
        }
        return -1;
    }
};
