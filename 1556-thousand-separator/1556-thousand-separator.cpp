class Solution {
public:
    string thousandSeparator(int n) {
        
        string ans="";
        if(n<=1000)
            return to_string(n);
        string s = to_string(n);
        int x =s.size();
        int cnt=3-x%3;
        reverse(s.begin(),s.end());
        
        for(int i =s.size()-1;i>=0;i--){
            if(cnt==3){
                ans+=".";
                cnt=0;
                i++;
            }
            else
            {
                ans+=string(1,s[i]);
                cnt++;
            }
        }
        if(x%3==0)
            ans.erase(ans.begin());
        return ans;
    }
};