class Solution {
public:
    int countVowelStrings(int n) {
        int res = ((n+4)*(n+3)*(n+2)*(n+1))/24;
        return res;
    }
};