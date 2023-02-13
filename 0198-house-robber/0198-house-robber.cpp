class Solution {
public:
    int f(vector<int>& nums, int ind ,vector<int>& dp){
        if(ind == 0)
            return nums[ind];
        if(ind<0)
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];
        int pick = f(nums,ind-2,dp)+nums[ind];
        int notpick = f(nums,ind-1,dp);
        return dp[ind] = max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        
        vector<int>dp(nums.size()+1,-1);
        
        return f(nums,nums.size()-1,dp);
    }
};