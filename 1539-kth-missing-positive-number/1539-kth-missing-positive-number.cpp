class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size()-1;
        int ans=0,j=0;
        int m=0;
        for(int  i=1;i<=arr[n];i++){
            if(arr[j]==i){
                j++;
            }
            else{
                ans=i;
                m++;
            }
            if(k==m)
                return ans;
        }
     return arr[n]+k-m;
        
    }
};