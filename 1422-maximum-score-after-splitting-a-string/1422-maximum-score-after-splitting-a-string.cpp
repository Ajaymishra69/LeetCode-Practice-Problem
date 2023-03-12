class Solution {
public:
    int maxScore(string s) {
        vector<string>ls,rs;
        int maxi = -1;
        string Ls="";
        for(int i=0;i<s.size()-1;i++){
            string Rs="";
            Ls+=string(1,s[i]);
            for(int j=i+1;j<s.size();j++){
                Rs+=string(1,s[j]);
            }
            ls.push_back(Ls);
            rs.push_back(Rs);
        }
        for(int i=0;i<ls.size();i++){
            string temp1=ls[i];
            string temp2=rs[i];
            cout<<temp1<<" "<<temp2<<endl;;
            int cnt =0;
            cnt+=count(temp1.begin(),temp1.end(),'0');
            cnt+=count(temp2.begin(),temp2.end(),'1');
            if(cnt>maxi)
                maxi = cnt; 
        }
        return maxi;
    }
};