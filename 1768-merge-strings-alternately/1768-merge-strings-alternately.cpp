class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string ans="";
        int i=0,j=0;
        for(int it=0;it<2*w1.size() && it<2*w2.size();it++){
            if(it%2==0){
                ans+=string(1,w1[i]);
                i++;
            }
            else
            {
                ans+=string(1,w2[j]);
                j++;
            }
        }
        while(i<w1.size()){
            ans+=string(1,w1[i]);
                i++;
        }
        while(j<w2.size()){
            ans+=string(1,w2[j]);
                j++;
        }
        return ans;
    }
};