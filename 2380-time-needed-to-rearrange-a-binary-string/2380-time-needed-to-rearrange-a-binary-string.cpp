class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int n = s.length();
        int flag =0;
        int cnt = 0;
        while(1){
            flag=0;
            for(int i=0;i<n-1;i++){
                if(s[i]=='0'&&s[i+1]=='1'){
                    s[i]='1';
                    s[i+1]='0';
                    flag=1;
                    i++;
                }

            }
            if(flag==0)
                break;
            cnt++;
        }
        return cnt;
    }
};