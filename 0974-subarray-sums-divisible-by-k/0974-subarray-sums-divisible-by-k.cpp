class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum =0;
        int ans=0;
        //vector<int>psum;
        unordered_map<int ,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum=(sum+nums[i])%k+k;
            //psum.push_back(sum);
            mp[sum%k]++;
            if(mp[sum%k]>1)
            {
                ans+=mp[sum%k]-1;
            }
        }
       return ans;
    }
};