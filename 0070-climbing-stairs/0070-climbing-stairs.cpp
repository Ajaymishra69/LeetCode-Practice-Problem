class Solution {
public:
    int f(int n , vector<int>& dp)
    {
        if(n<=1)
            return 1;           //Base case
        if(dp[n]!=-1)
            return dp[n];
        int left = f(n-1,dp);    // recurvise code
        int right = f(n-2,dp);
        return dp[n]=(left + right);
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int ans = f(n,dp);
        return ans;
    }
};