class Solution {
public:
    static bool cmp (string &a, string &b)
    {
        if(a.size()==b.size())
        {
            return a>b;
        }
        else
            return a.size()>b.size();
    }
    string kthLargestNumber(vector<string>& nums, int k) {
        // vector<int> x;
         int n = nums.size();
        // for(int i =0 ;i<n;i++)
        // {
        //     x[i]=stoi(nums[i]);
        // }
        sort(nums.begin(),nums.end(),cmp);
        //  for(int i =0 ;i<n;i++)
        // {
        //     nums[i]=to_string(x[i]);
        // }
        return nums[k-1];
    }
};