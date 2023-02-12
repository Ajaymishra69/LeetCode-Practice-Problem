class Solution {
public:
    int FirstPos(int s , int e , vector<int>& nums , int target){
        int temp = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                temp=mid;
                e=mid-1;
            }
            if(nums[mid]<target)
                s=mid+1;
            else
                e=mid-1;
        }
        return temp;
    }
    
    int LastPos(int s , int e , vector<int>& nums , int target){
        int temp = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                temp=mid;
                s=mid+1;
            }
            else if(nums[mid]>target)
                e=mid-1;
            else
                s=mid+1;
        }
        return temp;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0;
        int e =nums.size()-1;
        vector<int> ans(2,-1);
        ans[0] = FirstPos(s,e,nums,target);
        ans[1] = LastPos(s,e,nums,target);
        return ans;
    }
};