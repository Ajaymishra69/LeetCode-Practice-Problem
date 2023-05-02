class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cntneg=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0)
                cntneg++;
            if(nums[i]==0){
                return 0;
                break;
            }
        }
        if(cntneg%2==0)
            return 1;
        return -1;
    }
};