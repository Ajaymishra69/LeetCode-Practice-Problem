class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
            return true;
       if(n<=0)
           return false;
        double logi = log(n)/log(4);
        return(logi==(int)logi);
    }
};