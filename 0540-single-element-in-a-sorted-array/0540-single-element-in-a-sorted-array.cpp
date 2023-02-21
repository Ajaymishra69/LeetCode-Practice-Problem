class Solution
{
    public:
        int singleNonDuplicate(vector<int> &nums)
        {
            int n = nums.size();
            int s = 0;
            int e = n - 1;
            if (n == 1)
                return nums[0];
            if (nums[0] != nums[1])
                return nums[0];
            if (nums[e] != nums[e - 1])
                return nums[e];
            while (s <= e)
            {
                int mid = s + (e - s) / 2;
                if ((nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) && (mid > 0 && mid < n - 1))
                    return nums[mid];
                if ((nums[mid] == nums[mid + 1] && mid % 2 == 0) || (nums[mid] == nums[mid - 1] && mid % 2 != 0))
                    s = mid + 1;
                else
                    e = mid - 1;
            }
            return nums[s];
        }
};