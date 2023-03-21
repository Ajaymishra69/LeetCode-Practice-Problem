class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int>v(1e5+2,0);
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 && nums[i]<1e5)
                v[nums[i]]++;
            else
                v[1e5]++;
        }
        for(int i=1;i<v.size();i++){
            if(v[i]==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};