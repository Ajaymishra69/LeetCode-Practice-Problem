class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>st;
        for(auto i:nums)
            st.insert(i);
        nums.clear();
        for(auto i:st)
            nums.push_back(i);
        if(nums[0]!=0)
            return nums.size();
        return nums.size()-1;
    }
};