class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<int,int>>res(n+1,{0,0});
        for(int i=0;i<trust.size();i++)
        {
            res[trust[i][0]].first++;
            res[trust[i][1]].second++;
        }
        for(int i=1;i<=n;i++)
        {
            if(res[i].first==0&&res[i].second==n-1)
                return i;
        }
        return -1;
    }
};