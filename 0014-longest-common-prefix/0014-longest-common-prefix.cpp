class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            char ch = strs[0][i];
            bool flag = true;
            for(int j=1;j<n;j++){   // comp ch with other char of string in strs
                if(ch!=strs[j][i]||strs[j].size()<i)    //if char is not matched
                {
                    flag=false;
                    break;
                }
            }
            if(flag==false)
                break;
            else
                ans.push_back(ch);
        }
        return ans;
    }
};