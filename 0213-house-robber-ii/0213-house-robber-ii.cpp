class Solution {
public:
    int f(vector<int>& nums,int ind ,vector<int>& dp){
        if(ind==0)
            return nums[ind];
        if(ind<0)
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];
        int pick = nums[ind];
        if(ind>1)
            pick+=f(nums,ind-2,dp);
        int notpick = f(nums,ind-1,dp);
        return dp[ind] = max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        vector<int>res1,res2;
        vector<int>dp1(n-1,-1);
        vector<int>dp2(n-1,-1);
        for(int i = 0;i<n;i++){
            if(i!=0)
                res1.push_back(nums[i]);
            if(i!=n-1)
                res2.push_back(nums[i]);
        }
        return max(f(res1,n-2,dp1),f(res2,n-2,dp2));
    }
};