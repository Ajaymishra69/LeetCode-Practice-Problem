class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt=0;
        for(auto i:patterns){
            if(word.find(i)!=-1)
                cnt++;
        }
        return cnt;
    }
};