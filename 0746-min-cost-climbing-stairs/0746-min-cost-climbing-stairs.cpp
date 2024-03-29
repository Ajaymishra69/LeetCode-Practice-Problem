class Solution {
public:
    int f(int ind , vector<int>& cost,vector<int>& dp){
        if(ind<=1)
            return cost[ind];
        if(dp[ind]!=-1)
            return dp[ind];
        dp[ind] = cost[ind]+min(f(ind-1,cost,dp),f(ind-2,cost,dp));
        return dp[ind];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1,-1);
        return min(f(n-1,cost,dp),f(n-2,cost,dp));
    }
};