class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n = nums.size();
        int lsum=0,rsum=0;
        vector<int>ans(n,0);
        vector<int>ls,rs;
        nums.push_back(0);
        nums.insert(nums.begin(),0);
        for(int i=1,j = nums.size()-2;i<nums.size()-1,j>=1;i++,j--){
            lsum += nums[i-1];
            ls.push_back(lsum);
            rsum+=nums[j+1];
            rs.insert(rs.begin(),rsum);
        }
        for(int i=0;i<n;i++)
            ans[i]=abs(ls[i]-rs[i]);
        return ans;
    }
};