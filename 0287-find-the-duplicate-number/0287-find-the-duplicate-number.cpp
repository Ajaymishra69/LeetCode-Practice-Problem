class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int x;
        for(auto i:nums)
            mp[i]++;
        nums.clear();
        for(auto i:mp){
            if(i.second>=2)
               x = i.first;     
        }
        return x;
    }
};