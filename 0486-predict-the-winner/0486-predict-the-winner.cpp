class Solution {
public:
    vector<vector<int>>dp;
    int solve(vector<int>& nums, int l , int r){
        if(dp[l][r]!=-1)
            return dp[l][r];
        if(l==r)
            return nums[l];
        int left = nums[l] - solve(nums,l+1,r);
        int right = nums[r] - solve(nums,l,r-1);
        dp[l][r] = max(left,right);
        return dp[l][r];
    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        dp = vector<vector<int>>(n,vector<int>(n,-1));
        int ans = solve(nums,0,n-1);
        if(ans>=0)
            return true;
        return false;
    }
};