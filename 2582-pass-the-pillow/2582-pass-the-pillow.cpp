class Solution {
public:
    int passThePillow(int n, int t) {
        int loop = t/(n-1);
        if(loop%2==0)
            return(1+t%(n-1));
        return(n-t%(n-1));
    }
};