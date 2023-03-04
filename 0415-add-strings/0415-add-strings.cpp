class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        string ans ="";
        int carr = 0;
        while(i>=0 || j>=0){
            int a=(i<0)?0:stoi(string(1,num1[i]));
            int b=(j<0)?0:stoi(string(1,num2[j]));
            int sum = a+b+carr;
            carr=sum/10;
            sum%=10;
            ans+=to_string(sum);
            i--,j--;
        }
        //  while(i>=0){
        //     int sum = stoi(string(1,num1[i]))+carr;
        //     carr=sum/10;
        //     sum%=10;
        //     ans+=to_string(sum);
        //     i--;
        // }
        //  while(j>=0){
        //     int sum = stoi(string(1,num2[j]))+carr;
        //     carr=sum/10;
        //     sum%=10;
        //     ans+=to_string(sum);
        //     j--;
        // }
        if(carr!=0)
            ans+=to_string(carr);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};