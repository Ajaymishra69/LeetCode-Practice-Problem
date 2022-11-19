class Solution {
public:
    static int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(begin(nums), end(nums)), end(nums));
        return size(nums);
    }
};