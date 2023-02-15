class Solution
{
    public:
        int rob(vector<int> &nums)
        {

            int n = nums.size();

            if (n == 1) return nums[0];

            if (n == 2) return max(nums[0], nums[1]);

            vector<int> res1, res2;

            int curr1, curr2;

            for (int i = 0; i < n; i++)
            {
                if (i != 0)
                    res1.push_back(nums[i]);
                if (i != n - 1)
                    res2.push_back(nums[i]);
            }

            int prev1 = res1[0];

            int prev2 = 0;

            for (int i = 1; i < res1.size(); i++)
            {
                int pick = res1[i];
                if (i > 1)
                    pick += prev2;
                int notpick = prev1;
                curr1 = max(pick, notpick);
                prev2 = prev1;
                prev1 = curr1;
            }

            int prev3 = res2[0];

            int prev4 = 0;

            for (int i = 1; i < res2.size(); i++)
            {
                int pick = res2[i];
                if (i > 1)
                    pick += prev4;
                int notpick = prev3;
                curr2 = max(pick, notpick);
                prev4 = prev3;
                prev3 = curr2;
            }

            return max(curr1, curr2);
        }
};