class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n<2)
            return n;
        unordered_set<int>st;
        for(auto it:nums)
            st.insert(it);
        nums.clear();
        for(auto it:st)
            nums.push_back(it);
        sort(nums.begin(),nums.end());
        int maxi=1,cnt=0,flag=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1] && flag==0){
                cnt=2;
                flag=1;
            }
            else if(nums[i]+1==nums[i+1] && flag==1){
                cnt++;
            }
            else{
                flag=0;
                maxi=max(maxi,cnt);
            }
        }
        maxi=max(maxi,cnt);
        return maxi;
    }
};