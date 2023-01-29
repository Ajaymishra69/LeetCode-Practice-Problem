class Solution {
public:
     void fun(int ind, int n, vector<int> &nums,
            vector<vector < int>> &ans, vector< int > &temp)
        {
            if (ind == n)
            {
                ans.push_back(temp);        // Base Case
                return;
            }
            temp.push_back(nums[ind]);         // pushing value temporarily to vector

            fun(ind + 1, n, nums, ans, temp);   // when we are picking the number

            temp.pop_back();             // if didn't pick the number pop the prev added num

            fun(ind + 1, n, nums, ans, temp);       // When we aren't picking the num
        }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector < int>> ans;
         vector<int> temp;
        sort(nums.begin(), nums.end());
         fun(0, nums.size(), nums, ans, temp);
        
        set<vector<int>>st;
        
        for(auto it : ans)
            st.insert(it);
        
        ans.clear();
        
        for(auto it : st)
            ans.push_back(it);
        
        
         return ans;
    }
};