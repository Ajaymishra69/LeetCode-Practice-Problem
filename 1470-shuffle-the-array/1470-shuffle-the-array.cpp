class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int i =0,j=nums.size()/2;
        while(n>0){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++,j++,n--;
        }
        return ans;
    }
};