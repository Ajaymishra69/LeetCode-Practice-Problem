class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        nums.clear();
        for(auto i:mp){
            if(i.second<=2){
                while(i.second--)
                    nums.push_back(i.first);
            }  
            else{
                int x=2;
                 while(x--)
                    nums.push_back(i.first);
            }
        }
        sort(nums.begin(),nums.end());
            return nums.size();  
    }
};