class Solution {
public:
    void fun(int index , int target , vector<int>& candidates ,
             vector<vector<int>>& res,vector<int>&temp)
    {
        if(target<=0||index==candidates.size()){
            if(target==0)
                res.push_back(temp);
        return;
        }
          
        temp.push_back(candidates[index]);
        target-=candidates[index];
        
        fun(index,target,candidates,res,temp);
        
        target+=candidates[index];
        temp.pop_back();
        
        fun(index+1,target,candidates,res,temp);
            
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int>temp;
        fun(0,target,candidates,res,temp);
        return res;
    }
};