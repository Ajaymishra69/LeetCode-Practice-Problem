class Solution {
public:
    char slowestKey(vector<int>& r, string k) {
        int n = r.size();
        int arr[n];
        int maxi=-1;
        int ind=0;
        arr[0]=r[0];
        for(int i=1;i<n;i++){
            arr[i]=r[i]-r[i-1];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>maxi)
            {
                maxi=arr[i];
                ind=i;
            }
            if(arr[i]==maxi){
                if(k[ind]<k[i])
                    ind =i;
            }
        }
        return k[ind];
    }
};