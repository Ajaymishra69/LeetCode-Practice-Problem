class Solution {
public:
    int numJewelsInStones(string j, string s) {
        unordered_map<char,int>mp;
        int cnt=0,n=s.size();
        int m = j.size();
        for(int i=0;i<n;i++)
            mp[s[i]]++;
        for(int i=0;i<m;i++)
            cnt+=mp[j[i]];
        return cnt;
    }
};