class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>v1;
        if(num%3!=0)
            return v1;
        else
        {
            long long x =num/3;
            v1.push_back(x-1);
            v1.push_back(x);
            v1.push_back(x+1);
        }
        return v1;
    }
};