class Solution {
public:
    // logic is Ind of minK - strt +1
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int strt=0;
        bool minf,maxf=false;
        long long ans=0;
        int minInd,maxInd;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            if(num<minK || num>maxK){
                minf=maxf=false;        //terminating cond
                strt=i+1;
            }
            if(num==minK){
                minf=true;
                minInd = i;
            }
            if(num==maxK){
                maxf=true;
                maxInd = i;
            }
            if(maxf && minf){
                ans+=(min(minInd,maxInd)-strt+1);
            }
        }
        return ans;
    }
};