class Solution {
public:
    string digitSum(string s, int k) {
        if(s.size()<=k)
            return s;
        vector<string>v;
        string tem="";
        string ans="";
        for(int i=0;i<s.size();i++){
            if(i%(k)==k-1 && i!=0){
                tem+=string(1,s[i]);
                v.push_back(tem);
                tem.clear();
            }
            else
                tem+=string(1,s[i]);
        }
        if(!tem.empty())
            v.push_back(tem);
        // for(auto i:v)
        //     cout<<i<<endl;
        for(auto i:v){
            int sum=0;
            for(int it=0;it<i.size();it++){
                sum+=i[it]-'0';
            }
            ans+=to_string(sum);
        }
        //cout<<ans<<endl;
        if(ans.size()>k)
            return digitSum(ans,k);
        return ans;
    }
};