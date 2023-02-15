class Solution {
public:
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
        dp1[0]=res1[0];
        for(int i =1;i<res1.size();i++){
            int pick = res1[i];
            if(i>1)
                pick+=dp1[i-2];
            int notpick = dp1[i-1];
            dp1[i] = max(pick , notpick);
        }
        dp2[0] = res2[0]; 
        for(int i =1;i<res2.size();i++){
            int pick = res2[i];
            if(i>1)
                pick+=dp2[i-2];
            int notpick = dp2[i-1];
            dp2[i] = max(pick , notpick);
        }
        return max(dp1[res1.size()-1],dp2[res2.size()-1]);
    }
};