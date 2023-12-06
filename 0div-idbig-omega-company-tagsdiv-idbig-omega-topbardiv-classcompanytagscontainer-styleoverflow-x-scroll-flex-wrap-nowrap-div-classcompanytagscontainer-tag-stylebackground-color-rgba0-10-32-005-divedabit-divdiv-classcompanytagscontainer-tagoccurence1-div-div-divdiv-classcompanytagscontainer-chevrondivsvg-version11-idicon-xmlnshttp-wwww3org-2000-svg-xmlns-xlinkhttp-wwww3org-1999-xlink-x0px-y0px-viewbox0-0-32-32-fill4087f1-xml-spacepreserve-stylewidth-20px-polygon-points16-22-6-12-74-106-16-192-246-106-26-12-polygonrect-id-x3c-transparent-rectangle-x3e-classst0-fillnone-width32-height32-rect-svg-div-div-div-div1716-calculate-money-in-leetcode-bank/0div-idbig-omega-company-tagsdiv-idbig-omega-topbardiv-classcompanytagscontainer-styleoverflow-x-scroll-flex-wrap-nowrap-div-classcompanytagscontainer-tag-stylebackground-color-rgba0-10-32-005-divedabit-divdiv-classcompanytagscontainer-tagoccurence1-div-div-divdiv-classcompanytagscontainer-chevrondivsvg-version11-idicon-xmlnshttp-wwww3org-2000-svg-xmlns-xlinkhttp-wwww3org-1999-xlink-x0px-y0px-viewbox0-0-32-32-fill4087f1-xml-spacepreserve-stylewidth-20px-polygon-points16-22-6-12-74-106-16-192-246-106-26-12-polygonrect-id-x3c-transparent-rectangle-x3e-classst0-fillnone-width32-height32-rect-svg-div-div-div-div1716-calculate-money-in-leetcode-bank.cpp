class Solution {
public:
    int totalMoney(int n) {
        int res=0,cnt=1,cnt1=1;
        int sum=1;
        for(int i=0;i<n;i++){
            if(sum==8){
                cnt1++;
                cnt=cnt1;
                res+=cnt;
                cnt++;
                sum=1;
                sum++;
            }
            else{
                res+=cnt;
                cnt++;
                sum++;
            }     
        }
        return res;
    }
};