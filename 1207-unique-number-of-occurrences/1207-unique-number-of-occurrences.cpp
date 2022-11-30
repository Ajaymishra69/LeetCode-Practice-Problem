class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        set<int> st;
        int n = arr.size();
        for(int i =0;i<n;i++)
        {
            mp[arr[i]]++;
        }
         unordered_map<int, int>:: iterator p;
        for(p=mp.begin();p!=mp.end();p++)
        {
            st.insert(p->second);
        }
        
        if(mp.size()==st.size())
            return true;
        return false;
    }
};