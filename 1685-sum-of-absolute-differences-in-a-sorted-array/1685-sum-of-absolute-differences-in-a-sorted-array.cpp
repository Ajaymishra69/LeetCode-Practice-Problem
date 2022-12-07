class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int prefixsum=0;
        int postfixsum=0;
        for(int i=0;i<n;i++)
        {
            prefixsum+=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            int temp=0;
            prefixsum-=nums[i];
            postfixsum+=nums[i];
            temp=abs((i+1)*nums[i]-postfixsum);
            temp+=abs(prefixsum-(n-i-1)*nums[i]);
            ans.push_back(temp);
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // v1=nums;
        // int j=0,y=0;
        // for(int i =0;i<n;i++)
        // {
        //     for(j=0;j<n;j++)
        //     {
        //          y+=abs(nums[i]-v1[j]);
        //     }
        //     ans.push_back(y);
        //     y=0;
        // }
         return ans;
    }
};