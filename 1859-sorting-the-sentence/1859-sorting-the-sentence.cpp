class Solution {
public:
    string sortSentence(string s) {
        vector<pair<int,string>>v;
        string ans="";
        istringstream ss(s);
        string temp;
        while(ss>>temp){
            int n = temp.size();
            int x = temp[n-1];
            temp.pop_back();
            v.push_back({x,temp});
        }
        sort(v.begin(),v.end());
        for(auto i:v)
            ans+=i.second+" ";
        ans.pop_back();
        return ans;
    }
};