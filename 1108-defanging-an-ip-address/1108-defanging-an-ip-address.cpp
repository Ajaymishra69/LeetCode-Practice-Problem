class Solution {
public:
    string defangIPaddr(string add) {
        string str;
        string ans="";
        istringstream ss(add);
        while(ss>>str){
            int n = str.size();
            for(int i=0;i<n;i++)
            {
                if(str[i] == '.')
                    ans+="[.]";
                else
                    ans+=str[i];
            }
            str.pop_back();
        }
        return ans;
    }
};