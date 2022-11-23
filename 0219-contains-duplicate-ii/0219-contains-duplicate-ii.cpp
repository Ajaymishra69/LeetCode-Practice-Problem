class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>m;
        //unordered_map<int,int>m2;
        for(int i=0;i<n;i++)
        {
            // pair<int,int>p=make_pair(nums[i],i);
            // m2.insert(p);
            if(m.count(nums[i])==1)
            {
                if(abs(i-m[nums[i]])<=k)
                    return true;
            }
             m[nums[i]]=i;
                
        }
        return false;
    }
};