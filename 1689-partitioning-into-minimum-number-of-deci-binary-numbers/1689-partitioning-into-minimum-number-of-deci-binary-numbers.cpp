class Solution {
public:
    int minPartitions(string s) {
        int maxx =0;int num;
        char ch;
        for(int i=0;i<s.size();i++)
        {
            ch=s[i];
            num=(int)ch-48;
            maxx=max(num,maxx);
        }
        return maxx;
    }
};