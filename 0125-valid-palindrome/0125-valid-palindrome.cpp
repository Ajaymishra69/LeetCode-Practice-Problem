class Solution {
public:
    bool isPalindrome(string s) {
        replace_if(s.begin() , s.end(),
            [] (const char& c) { return ispunct(c) ;},' ');
        istringstream ss(s);
        string str;
        string ans="";
        while(ss>>str){
            ans+=str;
            str.pop_back();
        }
        int n=ans.size();
        transform(ans.begin(),ans.end(),ans.begin(),::tolower);
        for(int i=0;i<n/2;i++){
            if(ans[i]!=ans[n-i-1])
                return false;
        }
        return true;
    }
};