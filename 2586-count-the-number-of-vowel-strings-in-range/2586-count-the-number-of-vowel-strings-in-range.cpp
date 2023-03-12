class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++){
            int n = words[i].size();
            string str=words[i];
            if((str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u')
               &&(str[n-1]=='a'||str[n-1]=='e'||str[n-1]=='i'||str[n-1]=='o'||str[n-1]=='u'))
               cnt++;
        }
               return cnt;
    }
};