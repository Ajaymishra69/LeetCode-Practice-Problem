class Solution {
public:
    bool strongPasswordCheckerII(string p) {
        // if(p=="ziyS5FrPQhoQ5oEWRpHW2MjI7sGfcMJdcsjQnIyRbdCilvFaQN07jQtAkOklbjFrU5KcHzw4EvJ41Yz2Ykyd")
        // return false;
        int n = p.size();
        if(n<8)
            return false;
        int c1=0,c2=0,c3=0,c4=0,c5=0;
        for(int i=0;i<n-1;i++){
            if(isupper(p[i])!=0)
                c1++;
            if(islower(p[i])!=0)
                c2++;
            if(isdigit(p[i])!=0)
                c3++;
            if(p[i]==p[i+1])
                return false;
            if(p[i]=='!'||p[i]=='@'||p[i]=='#'||p[i]=='$'||p[i]=='%'||p[i]=='^'||p[i]=='&'||p[i]=='*'||p[i]=='('||p[i]==')'||p[i]=='-'||p[i]=='+')
                c4++;
        }
        if(isupper(p[n-1])!=0)
                c1++;
        if(islower(p[n-1])!=0)
                c2++;
        if(isdigit(p[n-1])!=0)
                c3++;
        if(p[n-1]=='!'||p[n-1]=='@'||p[n-1]=='#'||p[n-1]=='$'||p[n-1]=='%'||p[n-1]=='^'||p[n-1]=='&'||p[n-1]=='*'||p[n-1]=='('||p[n-1]==')'||p[n-1]=='-'||p[n-1]=='+')
                c4++;
        if(c1==0||c2==0||c3==0||c4==0)
            return false;
        return true;
    }
};