class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        //we use (int) becoz count func returns a unsigned value
        // maxi+1 becoz no of words should be 1 more than spaces
        int maxi = INT_MIN;
        for(auto it:sen)
            maxi=max(maxi,(int)count(it.begin(),it.end(),' '));
        return maxi+1;
    }
};