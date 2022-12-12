class Solution {
public:
    int Cs(int n , int cnt,vector<int>&dp)
    {
        if(n<0)
            return 0;
        if(n==0)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
       return dp[n]=(Cs(n-1,cnt+1,dp)+Cs(n-2,cnt+2,dp));
        
    }
    int climbStairs(int n) {
       
       int cnt= 0;
        vector<int>dp(n+1,-1);
        cnt=Cs(n,cnt,dp);
        return cnt;
    }
};