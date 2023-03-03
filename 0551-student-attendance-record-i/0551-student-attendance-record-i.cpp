class Solution {
public:
    bool checkRecord(string s) {
        int flag=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        if(s.size()<=2 && s[1]!='A')
            return true;
        if(s.size()<=2 && s[1]=='A' && s[0]=='A')
            return false;
        for(int i=0;i<s.size()-2;i++){
            if(s[i]=='L'&&s[i+1]=='L' && s[i+2]=='L')
                {
                    flag=1;
                    break;
                }
            else
                 continue;
        }
        if(mp['A']<2 && flag==0)
            return true;
        return false;
        
    }
};