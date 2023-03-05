class Solution {
public:
    int countConsistentStrings(string a, vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            int cnt=0;
            for(int j=0;j<words[i].size();j++){
                if(a.find(words[i][j])==string::npos){
                    cnt=1;          // char is not present in allowed string
                    break;
                }   
            }
            if(cnt==0)
                ans++;
        }
        return ans;
    }
};