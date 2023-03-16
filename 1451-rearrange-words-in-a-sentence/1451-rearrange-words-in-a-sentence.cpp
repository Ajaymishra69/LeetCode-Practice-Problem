class Solution {
public:
    string arrangeWords(string text) {
        multimap<int,string>mp;
        string ans = "";
        transform(text.begin(),text.end(),text.begin(),::tolower);
        istringstream ss(text);
        string str;
        while(ss>>str){
            int n = str.size();
            mp.insert(pair<int,string>(n,str));
        }
        for(auto i:mp){
            ans+=i.second +" ";
        }
        ans.pop_back();
        ans[0]=ans[0]-32;
        return ans;
    }
};