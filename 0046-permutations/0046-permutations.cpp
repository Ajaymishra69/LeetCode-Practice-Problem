class Solution {
public:
    void fun(int n,vector<int>& nums,int freq[],vector<int>& v, vector<vector<int>>& ans){
        if(v.size()==n){
            ans.push_back(v);       //Base Case
            return;
        }
        for(int i =0;i<n;i++){
            if(freq[i]==0){
                v.push_back(nums[i]);      //Recursive case
                freq[i]=1;
                fun(n,nums,freq,v,ans);
                freq[i]=0;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        int freq[n];
        vector<int> v;
        vector<vector<int>>ans;
        for(int i =0;i<n;i++)freq[i]=0;
        fun(n,nums,freq,v,ans);
        return ans;
    }
};