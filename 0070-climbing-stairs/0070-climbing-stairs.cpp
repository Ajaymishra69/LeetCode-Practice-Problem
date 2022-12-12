class Solution
{
    public:
       	//     int Cs(int n, int cnt,vector<int>&dp)
       	//     {
       	//         if(n < 0)
       	//             return 0;
       	//         if(n==0)
       	//             return 1;
       	//         if(dp[n]!=-1)
       	//             return dp[n];
       	//        return dp[n]=(Cs(n-1,cnt+1,dp)+Cs(n-2,cnt+2,dp));

       	//     }
        int climbStairs(int n)
        {
            if (n == 1)
                return 1;
            int a = 2;
            int b = 1;
            for (int i = 3; i <= n; i++)
            {
                a = a + b;
                b = a - b;
            }

            return a;
        }
};