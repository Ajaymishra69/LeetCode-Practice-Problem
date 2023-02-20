class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>res;
        set<vector<int>>st;
        for(int i=0;i<n-1;i++){
            int lo = i+1,hi=n-1;
            int tar = 0-nums[i];
            while(lo<hi){
                if(nums[lo]+nums[hi] == tar){
                    vector<int>temp;
                    temp = {nums[i],nums[lo],nums[hi]};
                    res.push_back(temp);
                    while(lo<hi && nums[lo]==nums[lo+1])
                    {
                        lo++;
                    }
                     while(lo<hi && nums[hi]==nums[hi-1])
                    {
                        hi--;
                    }
                    lo++,hi--;
                }
                else if(nums[lo]+nums[hi] >tar)
                    hi--;
                else
                    lo++;
            }
        }
        for(auto it:res)
            st.insert(it);
        res.clear();
        for(auto it:st)
            res.push_back(it);
        return res;
    }
};