class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        nums.clear();
        for(auto i:mp){
            if(i.second>=2)
                nums.push_back(i.first);
        }
        return nums;
    }
};