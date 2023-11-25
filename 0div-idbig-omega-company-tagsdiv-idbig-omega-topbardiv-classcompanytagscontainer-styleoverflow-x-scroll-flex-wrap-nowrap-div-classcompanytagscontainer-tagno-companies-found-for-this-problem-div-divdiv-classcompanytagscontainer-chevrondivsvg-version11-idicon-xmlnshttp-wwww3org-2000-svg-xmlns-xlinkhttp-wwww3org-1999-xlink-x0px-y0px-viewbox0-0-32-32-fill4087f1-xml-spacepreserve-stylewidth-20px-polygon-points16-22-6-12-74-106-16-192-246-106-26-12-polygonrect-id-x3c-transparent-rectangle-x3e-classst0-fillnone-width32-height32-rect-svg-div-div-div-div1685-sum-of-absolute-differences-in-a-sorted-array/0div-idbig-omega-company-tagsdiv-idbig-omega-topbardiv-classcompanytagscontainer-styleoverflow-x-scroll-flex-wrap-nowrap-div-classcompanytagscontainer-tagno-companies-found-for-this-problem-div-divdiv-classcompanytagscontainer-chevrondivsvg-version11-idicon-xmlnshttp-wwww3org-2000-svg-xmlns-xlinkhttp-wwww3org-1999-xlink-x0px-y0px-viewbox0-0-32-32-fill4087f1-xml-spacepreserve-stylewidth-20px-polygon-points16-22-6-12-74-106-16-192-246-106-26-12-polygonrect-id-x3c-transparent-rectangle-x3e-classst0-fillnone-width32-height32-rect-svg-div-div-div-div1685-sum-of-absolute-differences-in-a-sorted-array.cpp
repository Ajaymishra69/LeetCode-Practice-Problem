class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        int presum=0,postsum=0;
        vector<int>ans;
        int sum=0;
        for(int i=0;i<n;i++)
            presum+=nums[i];
        for(int i=0;i<n;i++){
            presum-=nums[i];
            postsum+=nums[i];
            sum=abs((i+1)*nums[i]-postsum);
            sum+=abs((n-i-1)*nums[i]-presum);
            ans.push_back(sum);
        }
        return ans;
    }
};