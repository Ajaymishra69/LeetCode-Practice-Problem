class Solution {
public:
    int fib(int n) {
        if(n==1 || n==0)
            return n;
        // Space optimization
        int prev2=0;
        int prev1=1;
        for(int i =2;i<n+1;i++)
        {
            int curr = prev2+prev1;
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};