class Solution
{
    public:
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