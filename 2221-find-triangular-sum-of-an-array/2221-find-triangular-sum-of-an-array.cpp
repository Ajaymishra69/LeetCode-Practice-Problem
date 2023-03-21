class Solution
{
    public:
        int triangularSum(vector<int> &nums)
        {
            int n = nums.size();
            if (n == 1)
                return nums[0];
            vector<int> temp;
            while (n>1)
            {
                n = nums.size();
                for (int i = 0; i < n-1 ; i++)
                {
                    int t = (nums[i] + nums[i + 1]) % 10;
                    temp.push_back(t);
                }
                nums.clear();
                nums=temp;
                temp.clear();
            }
            return nums[0];
        }
};