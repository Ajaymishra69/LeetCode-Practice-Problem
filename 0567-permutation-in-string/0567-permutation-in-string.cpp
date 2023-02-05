class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1 = s1.length();
        int l2 = s2.length();
        if(s1.length()>s2.length())
            return false;
        sort(s1.begin(),s1.end());
        for(int i=0;i<(l2-l1+1);i++)
        {
            string temp = s2.substr(i,s1.length());
            sort(temp.begin(),temp.end());
            if(s1==temp)
                return true;
        }
        return false;
    }
};