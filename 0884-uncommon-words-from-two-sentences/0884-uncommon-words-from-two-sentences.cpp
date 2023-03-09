class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;
        vector<string>ans;
        istringstream ss(s1);
        istringstream ss2(s2);
        string str1,str2;
        while(ss>>str1){
            mp[str1]++;
            str1.pop_back();
        }
        while(ss2>>str2){
            mp[str2]++;
            str2.pop_back();
        }
        for(auto i:mp){
            if(i.second==1)
                ans.push_back(i.first);
        }  
        return ans;
    }
};