class Solution
{
    public:
        long long zeroFilledSubarray(vector<int> &nums)
        {
            vector < long long > cnt;
            long long c = 0;
            long long ans = 0;
            for (long long i = 0; i < nums.size(); i++)
            {
                if (nums[i] == 0)
                    c++;
                else
                {
                    cnt.push_back(c);
                    c = 0;
                }
            }
            cnt.push_back(c);
            for (long long i = 0; i < cnt.size(); i++)
                if (cnt[i] != 0)
                    ans += (cnt[i] *(cnt[i] + 1)) / 2;
            return ans;
        }
};