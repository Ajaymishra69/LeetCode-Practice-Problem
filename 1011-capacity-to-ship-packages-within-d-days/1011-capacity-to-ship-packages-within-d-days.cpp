class Solution {
public:
    int shipWithinDays(vector<int>& w, int days) {
        int n = w.size();
        int maxweight = -1;
        int totweight = 0;
        for(int i =0;i<n;i++){
            maxweight = max(maxweight,w[i]);        //s
            totweight+=w[i];                        //e
        }
        int s = maxweight;
        int e = totweight;
        while(s<e){
            int mid = s+(e-s)/2;
            int dayneeded = 1;
            int sum=0;
            for(int i =0;i<n;i++){
                if(sum+w[i] > mid){
                    dayneeded++;
                    sum = 0;
                }
                 sum+=w[i];
            }
            if(dayneeded>days)
                s = mid+1;
            else
                e = mid;
        }
        return s;
    }
};