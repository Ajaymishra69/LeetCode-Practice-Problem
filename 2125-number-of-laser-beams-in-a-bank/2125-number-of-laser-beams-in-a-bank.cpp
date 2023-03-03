class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev=0,ans=0;
        for(auto i:bank){
            int cnt = count(i.begin(),i.end(),'1');
            ans+=cnt*prev;
            if(cnt>0)
                prev=cnt;
        }
        return ans;
    }
};