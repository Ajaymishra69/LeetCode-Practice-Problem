class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        int res=0;
        for(int i=0;i<words.size();i++){
            string temp = words[i];
            int t=0,flag=0;
          for(auto it:chars)
            mp[it]++;   
            for(int j=0;j<temp.size();j++){
                if(mp.find(temp[j])!=mp.end())
                {t+=1;mp[temp[j]]--;
                if(mp[temp[j]]==0)
                    mp.erase(temp[j]);
                }
                else
                {flag=1;break;}
            }
            if(flag==0)
                res+=t;
            mp.clear();
                
        }
        return res;
    }
};