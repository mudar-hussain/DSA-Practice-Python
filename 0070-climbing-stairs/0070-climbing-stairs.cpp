class Solution {
public:
    int ans = 0;
    int dp[46];
    int solve(int n, int i){
        if(i == n){
            return dp[i] = 1;
        }
        if(i>=n)
            return 0;
        if(dp[i] != -1)
            return dp[i];
        
        return dp[i] = solve(n, i+1) + solve(n, i+2);
    }
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        
        return solve(n, 0);
    }
};