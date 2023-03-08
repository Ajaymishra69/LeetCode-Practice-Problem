class Solution {
public:
    int countWords(vector<string>& w1, vector<string>& w2) {
        unordered_map<string,int>mp1,mp2;
        int cnt=0;
        for(auto i:w1)
            mp1[i]++;
        for(auto i:w2)
            mp2[i]++;
        if(w1.size()>w2.size())
        {
            for(auto i:w2){
                if(mp2[i]==1 && mp1[i]==1)
                    cnt++;
            }
        }
        else if(w1.size()<w2.size())
        {
            for(auto i:w1){
                if(mp2[i]==1 && mp1[i]==1)
                    cnt++;
            }
        }
        else{
            for(auto i:w1){
                if(mp2[i]==1 && mp1[i]==1)
                    cnt++;
            }
        }
        return cnt;
    }
};