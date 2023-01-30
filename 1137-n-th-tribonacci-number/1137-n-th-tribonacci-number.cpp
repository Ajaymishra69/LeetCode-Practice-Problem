class Solution {
public:
    int f(int n ,vector<int>& dp){
        if(n<=0)             
            return 0;
        if(n==1)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n] =  f(n-1,dp)+ f(n-2,dp)+ f(n-3,dp);
    }
    int tribonacci(int n) {
        // if(n<=0)             Brute Force  TLE
        //     return 0;
        // if(n==1)
        //     return 1; 
        // return  tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        
        vector<int>dp(n+1,-1);
        
        return f(n,dp);
    }
};