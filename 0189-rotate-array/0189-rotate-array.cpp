class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        vector<int>t;
        while(k--){
            int n = nums.size()-1;
            int temp = nums[n];
            nums.pop_back();
            t.push_back(temp);
        }
        reverse(t.begin(),t.end());
        for(auto i:nums)
            t.push_back(i);
        nums=t;
    }
};