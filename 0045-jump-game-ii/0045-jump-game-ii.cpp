class Solution {
public:         // nm = NextMax   cm = CurrentMax   j= Jumps
    int jump(vector<int>& nums) {
        int n = nums.size();
        int nm = 0,cm=0,j=0;
        if(n<2)             //Edge Case
            return 0;
        for(int i =0;i<n-1;i++){
            nm=max(nm , nums[i]+i);
            if(i==cm){
                j++;
                cm=nm;
                if(cm>=n-1)
                    break;
            }
        }
        return j;
    }
};