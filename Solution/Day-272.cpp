class Solution {
    public:
        int numRollsToTarget(int d, int f, int target) {
            if (d*f <target) return 0;
            vector<vector<int>> dp(d+10 , vector<int>(target+10)); 
            int mod = 1e9+7;
            for(int i=1; i<=min(target , f); ++i) {
                dp[1][i] = 1; 
            }
            // dp[i][j] => number of ways to generate sum equal to j , with i dice
            for (int i=2; i<=d; ++i) {
                for (int j=1; j<=target; ++j) {
                    for (int k=1; k<=f && j-k>=0; ++k) {
                        dp[i][j] = (dp[i][j]+dp[i-1][j-k])%mod;
                    }
                }
            }
            return dp[d][target];
        }
};
