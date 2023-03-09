class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        int n= s.size();
        int x = n%k;
        if(x==0){
            string temp;
            for(int i=0;i<n;i++){
                if((i+1)%k==0){
                    temp+=string(1,s[i]);
                    ans.push_back(temp);
                    temp.clear();
                    
                }
                else{
                    temp+=string(1,s[i]);
                }
            }
        }
        else{
            string temp;
            for(int i=0;i<n;i++){
                if((i+1)%k==0){
                    temp+=string(1,s[i]);
                    ans.push_back(temp);
                    temp.clear();
                    
                }
                else{
                    temp+=string(1,s[i]);
                }
            }
            int t=k-x;
            while(t>0){
                temp+=string(1,fill);
                t--;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};