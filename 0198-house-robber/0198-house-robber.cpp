class Solution
{
    public:
        int solve(vector<int> &nums, int index, vector<int> &dp)
        {
            if (index >= nums.size())
                return 0;
            if (dp[index] != -1)
                return dp[index];
            return dp[index] = max(solve(nums, index + 1, dp), nums[index] + solve(nums, index + 2, dp));
        }

    int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n + 1, -1);
        return solve(nums, 0, dp);
    }
};