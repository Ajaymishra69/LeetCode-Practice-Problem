class Solution {
public:
    int numRescueBoats(vector<int>& pep, int lim) {
        sort(pep.begin(),pep.end());
        int n = pep.size();
        int cnt=0;
        int j = 0;
        int i=n-1;
        while(j<=i){
            if(pep[i]+pep[j]<=lim)
            {
                cnt++;
                j++;
                i--;
            }
            else if(pep[i]+pep[j]>lim){
                cnt++;
                i--;
            }
        }
        return cnt;
    }
};