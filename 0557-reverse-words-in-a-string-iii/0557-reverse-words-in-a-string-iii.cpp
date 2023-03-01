class Solution {
public:
    string reverseWords(string s) {
        string str;
        string ans="";
        istringstream ss(s);
        while(ss>>str){
            reverse(str.begin(),str.end());
            ans+=str+" ";
        }
        ans.pop_back();
        return ans;
    }
};