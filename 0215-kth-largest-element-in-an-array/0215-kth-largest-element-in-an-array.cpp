class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        // set<int> st;
        // for(int i=0;i<nums.size();i++)
        // {
        //     st.insert(nums[i]);
        // }
        // vector<int> x;
        // for(auto i=st.begin();i!=st.end();i++)
        // {
        //     x.push_back(*i);
        // }
        // int n=x.size();
        return nums[k-1];
    }
};