class Solution {
public:
    int secondHighest(string s) {
        set<int>v;
        vector<int>ans;
        for(int i =0;i<s.size();i++){
            if(isdigit(s[i]))
                v.insert(stoi(string(1,s[i])));
        }
        for(auto i:v)
            ans.push_back(i);
        if(ans.size()==1||ans.size()==0)
            return -1;
        return ans[ans.size()-2];   
    }
};