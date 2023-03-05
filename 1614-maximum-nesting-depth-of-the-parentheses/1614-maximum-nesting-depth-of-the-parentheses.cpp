class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0;
        int n = s.size();
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')
            {    x++;
                maxi=max(maxi,x);
            }
            else if(s[i]==')')
                x--;
            else
                continue;
        }
        return maxi;
    }
};