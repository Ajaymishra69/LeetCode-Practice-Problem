class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>posi,negi,ans;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            if(nums[i]>0)
            {
                posi.push_back(nums[i]);
            }
            else
                negi.push_back(nums[i]);
        }
        int j=0,k=0;
       for(int i=0;i<n;i++)
       {
           if(i%2==0){
               ans.insert(ans.begin()+i,posi[j]);
               j++;
           }
           else
           {
               ans.insert(ans.begin()+i,negi[k]);
               k++;
           } 
       }
        return ans;
    }
};