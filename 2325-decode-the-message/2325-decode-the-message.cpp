class Solution {
public:
    string decodeMessage(string key, string mes) {
    unordered_map<char,string>mp;
    int j = 0;
    mp[32]=32;
    string ans="";
    for(int i=0;i<key.size();i++)
    {  if(mp.find(key[i])==mp.end())
        
        {
            mp[key[i]] =97+j;
            j++;
        }
            
    }
        // for(auto i:mp)
        // cout<<i.first<<":"<<i.second<<endl;
        for(int i=0;i<mes.size();i++){
            if(mes[i]!=' ')
                ans+=mp[mes[i]];
            else
                ans+=" ";
        }
        return ans;
    }
};