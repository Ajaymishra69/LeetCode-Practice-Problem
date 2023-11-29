class Solution {
public:
    int hammingWeight(uint32_t n) {
        int setb=0;
        while(n>0){
            setb+=1&n;
            n=n>>1;
        }
        return setb;
    }
};