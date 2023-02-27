class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n  = time.size();
        int cnt = 0;
        vector<long long>v(60,0);
        for(int i=0;i<n;i++)
        {
            int rem = time[i]%60;
            v[rem]++;
        }
        int temp = 60;
        for(int i = 1;i<30;i++)
        {
            cnt+=v[i]*v[60-i];
        }
        cnt+=v[0]*(v[0]-1)/2;
        cnt+=v[30]*(v[30]-1)/2;
        return cnt;
    }
};