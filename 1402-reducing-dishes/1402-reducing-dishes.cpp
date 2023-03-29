class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        int n = s.size();
        int maxx = 0;
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++){
            int sum = 0;
            int z=1;
            for(int j=i;j<n;j++){
                sum+=s[j]*z;
                z++;
            }
            if(maxx<sum)
                maxx=sum;
        }
        return maxx;
    }
};