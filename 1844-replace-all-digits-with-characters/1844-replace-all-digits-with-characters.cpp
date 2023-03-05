class Solution {
public:
    string replaceDigits(string s) {
        int n = s.size();
        for(int i=0;i<n;i++){
            if(i%2!=0){
                char temp = s[i-1];
                s[i]=temp+stoi(string(1,s[i]));
            }
        }
        return s;
    }
};