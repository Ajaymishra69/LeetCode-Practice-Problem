class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int cnt=1;
        ans+=string(1,s[0]);
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1])
                cnt++;
            else
                cnt=1;
            if(cnt<3)
                ans+=string(1,s[i]);
        }
        return ans;
    }
};