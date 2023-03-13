class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>ans;
        int cnt=1;
        int i;
        for(i=1;i<s.size();i++){
            if(s[i]==s[i-1])
                cnt++;
            else{
                if(cnt>=3){
                    vector<int>temp;
                    temp.push_back(i-cnt);
                    temp.push_back(i-1);
                    ans.push_back(temp);
                    cnt=1;
                }
                else
                    cnt=1;
            }
        }
        if(cnt>=3){
                    vector<int>temp;
                    temp.push_back(i-cnt);  // edge cases like "aaa","abaaabbabbb"
                    temp.push_back(i-1);
                    ans.push_back(temp);
                    cnt=1;
                }
        return ans;
    }
};