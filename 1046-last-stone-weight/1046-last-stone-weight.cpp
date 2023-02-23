class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        int n = s.size();
        if(n==1)
            return s[n-1];
        int x = n;
        sort(s.begin(),s.end());
        for(int i =0;i<x;i++){
            sort(s.begin(),s.end());
            if(s[n-2]==-1)
                break;
            if(s[n-1]-s[n-2] == 0){
                s[n-1]=-1;
                s[n-2]=-1;
            }
            else{
                s[n-1]=s[n-1]-s[n-2];
                s[n-2]=-1;
            }
        }
        if(s[n-1] == -1)
            return 0;
        return s[n-1];
    }
};