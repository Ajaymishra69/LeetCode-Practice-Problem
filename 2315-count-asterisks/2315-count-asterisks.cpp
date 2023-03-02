class Solution {
public:
    int countAsterisks(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='|'){
                i++;
                while(s[i]!='|')
                    i++;
            }
            else{
                if(s[i]=='*')
                    cnt++;
            }
        }
        return cnt;
    }
};