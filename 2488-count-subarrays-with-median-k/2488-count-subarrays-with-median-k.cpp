class Solution {
public:
int x(vector<int>& nums,int k , int index){
     map<int , int> mp;
        mp[0] = 1;
        int cnt = 0;
        int sum  = 0;
        
        for (int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            
            if (i >= index and mp.find(sum - k) != mp.end()){
                cnt += mp[sum-k];
            }
            
            if (i < index){
                mp[sum] += 1;
            }
        }
        return cnt;
    }
    int countSubarrays(vector<int>& nums, int k) {
        //sort(nums.begin(),nums.end());
        int index =-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<k)
                nums[i]=-1;
            else if(nums[i]>k)
                nums[i]=1;
            else
                {nums[i]=0;
                    index = i;}
        }
        if(index==-1)
            return 0;
        return x(nums,0,index)+x(nums,1,index);
    }
};