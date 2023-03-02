class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        unordered_set<int>st;
        for(auto i:s)
            mp[i]++;
        for(auto i:mp)
            st.insert(i.second);
        if(st.size()==1)
            return true;
        return false;
    }
};