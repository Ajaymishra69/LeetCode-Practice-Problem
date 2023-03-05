class Solution {
public:
    int balancedStringSplit(string s) {
        int left=0,right=0,ans=0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='R')
                right++;
            else
                left++;
            if(right==left){
                ans++;
                right=left=0;
            }
        }
        return ans;
    }
};