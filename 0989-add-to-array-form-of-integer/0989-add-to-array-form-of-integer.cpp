class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
       int n = nums.size();
        for(int i = n-1;i>=0;i--){
            k+=nums[i];
            nums[i] = k%10;
            k/=10;
        }
        if(k>0){
            while(k>0)
            {
                nums.insert(nums.begin(),k%10);
                k=k/10;
            }
        }
        return nums;
    }
};