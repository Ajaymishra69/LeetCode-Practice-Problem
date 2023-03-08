class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.size();
        int cnt=0,flag=0;
        for(auto i:words){
            for(int it=0;it<n;it++){
                if(pref[it]!=i[it]){
                    flag=1;
                    break;
                }
                else
                    flag=0;
            }
            if(flag==0)
                cnt++;
        }
        return cnt;
    }
};