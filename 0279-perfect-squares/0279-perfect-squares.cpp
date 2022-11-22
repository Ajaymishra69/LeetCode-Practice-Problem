class Solution {
public:
    int numSquares(int n) {
        vector<long long> t(n+1,INT_MAX);
        t[0]=0,t[1]=1;
        for(int i=2;i<=n;i++)
        {
            int j=sqrt(i);
            while(j)
            {
                t[i]=min(t[i],t[i-j*j]+1);
                j--;
            }
        }
        return t[n];
    }
};