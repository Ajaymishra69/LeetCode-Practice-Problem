class Solution {
public:
    int Concat(int a , int b){
        if(b/10 < 1){
            a=a*10+b;
        }
        else if(b/10>=1 && b/10<10){
            a=a*100+b;
        }
        else if(b/10>=10 && b/10<100){
            a=a*1000+b;
        }
        else if(b/10>=100 && b/10<1000){
            a=a*10000+b;
        }
        else if(b/10>=1000 && b/10<10000){
            a=a*100000+b;
        }
        return a;
    }
    long long findTheArrayConcVal(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        if(n%2==0){
            for(int i =0;i<n/2;i++){
                ans+=Concat(nums[i],nums[n-1-i]);
            }
        }
        else{
            for(int i =0;i<n/2;i++){
                ans+=Concat(nums[i],nums[n-1-i]);
        }
            ans+=nums[n/2];
    }
        return ans;
    }
};