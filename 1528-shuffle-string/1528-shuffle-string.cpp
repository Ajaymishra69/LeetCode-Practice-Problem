class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
        int n = s.length();
        string str=s ;
        for(int i =0;i<n;i++)
            str[ind[i]]=s[i];
        return str;
    }
};