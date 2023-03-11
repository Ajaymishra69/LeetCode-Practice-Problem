class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1="",ans2="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(ans1.empty())
                    continue;
                else
                    ans1.pop_back();
            }
            else
                ans1+=string(1,s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(ans2.empty())
                    continue;
                else
                    ans2.pop_back();
            }
            else
                ans2+=string(1,t[i]);
        }
        cout<<ans1<<endl<<ans2;
        if(ans1==ans2)
            return true;
        return false;
    }
};