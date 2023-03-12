class Solution {
public:
    string largestOddNumber(string s) {
        // if(stoll(s)%2!=0)
        //     return s;
        int maxi = -1;
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
                char temp = s[i];
                string t = string(1,s[i]);
            if(stoi(t)%2!=0)
               { maxi=i;
               break;}
            cout<<maxi<<endl;
        }
        if(maxi!=-1)
            return s.substr(0,maxi+1);
        return ans;
    }
};