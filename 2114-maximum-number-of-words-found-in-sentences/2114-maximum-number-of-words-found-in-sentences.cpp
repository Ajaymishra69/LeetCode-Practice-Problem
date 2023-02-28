class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int maxi = INT_MIN;
        for(auto it:sen)
            maxi=max(maxi,(int)count(it.begin(),it.end(),' '));
        return maxi+1;
    }
};