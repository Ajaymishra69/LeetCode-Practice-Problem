class Solution {
public:
    string firstPalindrome(vector<string>& w) {
        string ans="";
        int f = 0;
        for(auto i:w){
            int n=i.size();
            for(int it=0;it<n;it++){
                if(i[it]!=i[n-it-1])
                {
                    f=1;
                    break;
                }
                else
                    f=0;
            }
            if(f==0){
                ans+=i;
                break;
            }
        }
        return ans;
    }
};