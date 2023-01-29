class Solution {
public:
    void fun(int ind , int n , vector<int>& nums , 
             vector<vector<int>>& ans , vector<int>& temp){
        if(ind == n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        
        fun(ind+1 , n, nums,ans,temp);
        
        temp.pop_back();
        
        fun(ind+1 , n, nums,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        fun(0,nums.size(),nums,ans,temp);
        return ans;
    }
};