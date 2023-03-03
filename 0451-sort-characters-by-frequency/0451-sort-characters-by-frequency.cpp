class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>>v;
        copy(mp.begin(),mp.end(),back_inserter<vector<pair<char,int>>>(v));
        sort(v.begin(), v.end(),
            [](const pair<char,int>&l, const pair<char,int> &r)
            {
                if (l.second != r.second) {
                    return l.second > r.second;
                }
 
                return l.first > r.first;
            });
        string ans="";
        for(auto const  &pair:v){
            int sec=pair.second;
            while(sec!=0){
                ans+=pair.first;
                sec--;
            }
        }
        return ans;
    }
};